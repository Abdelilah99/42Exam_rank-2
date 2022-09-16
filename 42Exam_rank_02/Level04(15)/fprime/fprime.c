#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_putnbr(int n){
    if (n<0)
    {
        n=-n;
        ft_putchar('-');
    }
    if(n>=10)
    ft_putnbr(n/10);
    ft_putchar((n%10)+'0');
    
}
int ft_atoi(char *str){
    int i;
    i=0;
    int n=0;
    int sign=1;
    while(str[i]==' ' || str[i]=='\r' || str[i]=='\f' || str[i]=='\v' || str[i]=='\n' || str[i]=='\t')
    i++;
    
    if (str[i]=='-')
    {
        sign=-1;
        i++;
    }
    else if (str[i]=='+')
    {
        i++;
    }
    while ((str[i]>='0' && str[i]<='9')&& str[i])
    {
        n=n*10+(str[i]-'0');
        i++;
    }
    return (n*sign);
    
}

void fprime(int n){
   int i;
   i=2;
   if(n==1)
   ft_putchar('1');
   while (n>=i)
   {
        if (n%i==0)
        {
            ft_putnbr(i);
            if(n==i)
            break;
            else 
            ft_putchar('*');
            n=n/i;
            i=2;
        }
        i++;
   }
   
    
}

int main(int argc,char **argv){
    if (argc==2)
    {
       fprime(ft_atoi(argv[1]));
    }
    write(1,"\n",1);
    return 0;
}