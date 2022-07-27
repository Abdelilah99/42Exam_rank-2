#include <stdio.h>
#include <unistd.h>


int ft_atoi(const char *str){
    int i;
    i=0;
    int sign =1;
	int n =0;
    while (str[i] == ' ' || str[i] =='\n' || str[i] == '\v' || str[i] == '\r' || str[i] =='\f' || str[i] == '\t')
        i++;
    
    if(str[i] == '-'){
    sign = -1;
    i++;
    }

    else if(str[i] == '+'){
        i++;
    }
    while ((str[i] >='0' && str[i]<='9') && str[i])
    {
        n=n*10 +(str[i] -'0');
        i++;
    }
    return (sign * n);
}
