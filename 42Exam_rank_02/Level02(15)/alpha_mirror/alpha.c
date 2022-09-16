#include <unistd.h>
#include <stdio.h>

void alpha(char *str){
    int i;
    i=0;
    while(str[i]){
        int letter ;
        letter=0;
        if ('A'<=str[i] && 'Z' >=str[i])
            letter =('Z' - *str)+'A';
        else if('a' <= *str && 'z'>= *str)
            letter =('z' - *str)+'a';
        else 
        letter =str[i];
        write(1,&letter,1);
        str++;
        
        
    }
}
int main(int argc,char **argv){
    if (argc == 2)
    {
       alpha(argv[1]);
    }
    write(1,"\n",1);
    return 0;
    
}
