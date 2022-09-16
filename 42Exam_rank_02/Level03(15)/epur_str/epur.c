#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c){
    write(1,"\n",1);
}
int is_space(char c){
    return((c==' ') || c=='\t');
}
void epur(char *str){
    int flag;
    flag=0;

    while(is_space(*str))
    str++;

    while (*str)
    {
        if(is_space(*str))
        flag=1;
        if(!is_space(*str)){
            if(flag)
            ft_putchar(' ');
            flag=0;
            ft_putchar(*str);
        }
        str++;
    }
    
}

int main(int argc,char **argv){
    if (argc==2)
    {
       epur(argv[1]);
    }
    write(1,"\n",1);
    return 0;
}