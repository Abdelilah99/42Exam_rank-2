int ft_str_check(char *str,int base){
    int n;
    if (!*str || !*(str +1) || (base < 2 || base >16))
        return 0;
    while (*str)
    {
        if(*str >= '0' && *str <='9')
            n=(*str -'0');
        if(*str >='A' && *str <='Z')
            n=(*str -'A' +10);
        else if(*str >='a' && *str <='z')
            n=(*str -'a'+10);
        if(n>=base)
            return 0;
    }
    return 1;
    
}
int	ft_atoi_base(const char *str, int str_base){
    int i;
    int n;
    int sign;

    i=0;
    n=0;
    sign =1;

    if(!(*str) && !ft_str_check((char *)str,str_base))
        return 0;
    while (str[i]== ' ' || str[i]== '\f' || str[i] == '\r' ||str[i]=='\v'|| str[i]== '\n' || str[i]== '\t')
    i++;

    if(str[i]=='-'){
        sign=-sign;
        i++;
    }
    if(str[i]== '-' || str[i]=='+')
        i++;
    
    while (str[i])
    {
        if(str[i]>='A' && 'F'>=str[i])
            n=(n*str_base)+(str[i]-'A'+10);
        else if(str[i] >='a' && 'f'>=str[i])
            n=(n*str_base)+(str[i]-'a'+10);
        else 
            n=(n*str_base)+str[i]-'0';
            i++;
    }
    return (n*sign);
}