#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

int hidenp(char *s1,char *s2){
    if(!(*s1))
        return 1;
    while(*s1 && *s2){
        if(*s1 == *s2)
            s1++;
        if(!(*s1))
            return 1;
        s2++;
    }
    return 0;
}
int main(int argc,char **argv){
    if (argc==3)
    {
        ft_putchar(hidenp(argv[1],argv[2]) + '0');
    }
    ft_putchar('\n');
}