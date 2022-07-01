#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_putnbr(int n){
    if(n<0){
        n=-n;
    }
    if(n >=10)
    ft_putnbr(n/10);
    ft_putchar(n%10 +'0');
}
int main(int argc,char **argv){
    int n1;
    char signal;
    int n2;
    int result;
    if (argc ==4)
    {
        n1=atoi(argv[1]);
        n2=atoi(argv[3]);
        signal=argv[2][0];
        if(signal=='+')
        result = n1 + n2;
        else if(signal=='-')
        result = n1 - n2;
        else if(signal == '/')
        result = n1 / n2;
        else if (signal == '*')
        result = n1 * n2;
        else if (signal == '%')
        result = n1 % n2;
        ft_putnbr(result);

    }
    write(1,"\n",1);
    return 0;
}