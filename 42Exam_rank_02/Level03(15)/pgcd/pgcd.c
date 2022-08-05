#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
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
int ft_pgcd(int nbr1,int nbr2){
  if ((nbr1 > 0 && nbr2 > 0))
	{
		while (nbr1 != nbr2)
		{
			if (nbr1 > nbr2)
				nbr1 =nbr1- nbr2;
			else
				nbr2 = nbr2-nbr1;
		}
	}
	return nbr1;
  }
  

int main(int argc,char **argv){
    if (argc==3)
    {
       ft_putnbr(ft_pgcd(ft_atoi(argv[1]),ft_atoi(argv[2])));
    }
    ft_putchar('\n');
    return 0;
}
