#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc,char **argv){
    int n1;
    char signal;
    int n2;
    int result;
    if (argc ==4)
    {
        n1=atoi(argv[1]);
        n2=atoi(argv[3]);
        signal=argv[2][0];
        if(signal=='+')
        result = n1 + n2;
        else if(signal=='-')
        result = n1 - n2;
        else if(signal == '/')
        result = n1 / n2;
        else if (signal == '*')
        result = n1 * n2;
        else if (signal == '%')
        result = n1 % n2;
        printf("%d",result);

    }
    printf("\n");
    return 0;
}