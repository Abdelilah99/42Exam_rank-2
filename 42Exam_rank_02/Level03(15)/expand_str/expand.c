#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

int ft_isspace(char c){
    return (c==' ' && c=='\t');
return 1;
return 0;
}
void ft_expand(char *str){
    int flag;
    flag=0;
    while(ft_isspace(*str))
        str++;
    while (*str)
    {
        if(ft_isspace(*str))
        flag=1;
        if (!ft_isspace(*str))
        {
            if (flag)
            {
                ft_putchar(' ');
                ft_putchar(' ');
                ft_putchar(' ');
            }
            flag=0;
            ft_putchar(*str);
        }
        str++;
    }
    
}
int main(int argc,char **argv){
    if (argc ==2)
    {
        ft_expand(argv[1]);
    }
    write(1,"\n",1);
    return 0;
}