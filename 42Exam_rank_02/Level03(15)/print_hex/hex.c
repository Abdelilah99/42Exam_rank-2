#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
    write(1,&c,1);
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
void ft_hex(int n){
    char *hex;
    char str[100];
    int i;

    hex="0123456789abcdef";
    if(n==0)
        ft_putchar('0');
    i=0;
    while (n)
    {
        str[i++]=hex[n%16];
        n=n/16;
    }
    str[i]='\0';
    while(i--)
        ft_putchar(str[i]);
}


int main(int argc,char **argv){
    if (argc==2)
    {
        ft_hex(ft_atoi(argv[1]));
    }
    write(1,"\n",1);
    return 0;
}