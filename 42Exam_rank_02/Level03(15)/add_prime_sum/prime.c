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
    int n;
    int sign;
    i=0;
    n=0;
    sign=1;
    while (str[i]==' '|| str[i]=='\v'||str[i]=='\f'||str[i]=='\r'||str[i]=='\n'||str[i]=='\t')
    i++;

    if(str[i]=='-'){
        sign=-1;
    i++;
    }
    else if(str[i]=='+'){
        i++;
    }
    while((str[i]>='0' && str[i]<='9')&& str[i]){
        n=n*10+(str[i] -'0');
        i++;
    }
    return (n*sign);
}
int fprime(int nb){
    int i;
    if(nb<2)
        return 0;
    i=2;
    while(i <= (nb/i)){
        if(nb%i==0)
        return 0;
        i++;
    }
    return 1;
}
int add_prime(int nb){
    int sum;
    sum=0;
    while(nb>1){
    if(fprime(nb))
    sum=sum+nb;
    nb--;
    }
    return sum;
}


int main(int argc,char **argv){
    if (argc == 2)
    {

        ft_putnbr(add_prime(ft_atoi(argv[1])));
    }
    else
       ft_putnbr(0);
    write(1,"\n",1);
    return 0;
}