#include <stdio.h>
#include <unistd.h>

int ft_atoi(const char *str){
    unsigned int num =0;
    int i=0;
    int np=1;
    while (str[i] == ' ' || str[i] =='\n' || str[i] == '\v' || str[i] == '\r' || str[i] =='\f' || str[i] == '\t')
    
    if(str[i]=='-' || str[i]=='+')
        if(str[i++] == '-')
        np=-1;
    
    while (str[i] >= 0 && str[i] <= 9)
    {
        num = num *10 +(str[i] - '0');
        i++;
    }
    return ((int)(num *np));
    
}
