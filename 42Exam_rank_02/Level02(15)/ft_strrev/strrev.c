#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str){
    int i;
    int j;
    int k;

    i=0;

    while(str[i])
    i++;
    i=-1;

    while (++i <--j)
    {
        k=str[i];
        str[i]=str[j];
        str[j]=k;
    }
    return 0;
}