#include <stdio.h>
#include <unistd.h>

int ft_verifchar(char *str,char c,int index){
    int i;
    i=0;
    while (str[i] && (i<index || index ==-1))
    {
       if(str[i] == c)
       return 0;
       i++;
    }
    return 1;
}

void ft_inter(char *s1,char *s2){
    int i;
    i=0;
    while (s1[i])
    {
        if(ft_verifchar(s1,s1[i],i) && !ft_verifchar(s2,s1[i],-1))
        write(1,&s1[i],1);
        i++;
    }
    
}
int main(int argc,char **argv){
    if (argc == 3)
    {
        ft_inter(argv[1],argv[2]);
    }
    write(1,"\n",1);
    return 0;
}