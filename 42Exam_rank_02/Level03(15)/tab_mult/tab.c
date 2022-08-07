#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putnbr(int n){
    if(n<0){
    n=-n;
    ft_putchar('-');
    }
    if (n>=10)
    
        ft_putnbr(n/10);
        ft_putchar((n%10)+'0');
    
    
}
int ft_atoi(char *str){
    int i;
    int n;
    int sign;

    i=0;
    n=0;
    sign=1;

    while (str[i]==' ' || str[i]=='\v' || str[i]=='\r' || str[i]=='\f' || str[i]=='\n'|| str[i]=='\t')
    i++;
    if (str[i]=='-')
    {
        sign=-1;
        i++;
    }
    else if(str[i]=='+'){
        i++;
    }
    while ((str[i]>='0' && str[i]<='9')&& str[i])
    {
        n=n*10+(str[i] -'0');
        i++;
    }
    return (n*sign);
}
void tab_multiple(int nbr){
    int i;
    i=1;
    while (i<=9)
    {
        ft_putnbr(i);
        ft_putchar(' ');
        ft_putchar('x');
        ft_putchar(' ');
        ft_putnbr(nbr);

        ft_putchar(' ');
        ft_putchar('=');
        ft_putchar(' ');

        ft_putnbr(i*nbr);
        ft_putchar('\n');
        i++;
    }
    
}
int main(int argc,char **argv){
    if(argc==2)
    tab_multiple(ft_atoi(argv[1]));
    else
        ft_putchar('\n');
        return 0;
    
}