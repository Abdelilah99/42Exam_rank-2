/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:13:27 by anoury            #+#    #+#             */
/*   Updated: 2022/06/27 15:28:31 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rotone(char *str){
    int i;
    i=0;
    while (str[i])
    {
        if (str[i]=='Z' || str[i]=='z')
        str[i]=str[i]-25;
        else if (str[i] >= 'A' && str[i]<='Y')
            str[i]=str[i]+1;
        else if(str[i] >= 'a' && str[i]<='y')
        str[i]=str[i]+1;
        write(1,str + i ,1);
        i++;
    }
    
}

int main(int argc,char **argv){
    int i;
    i=0;
    if (argc ==2)
    {
        ft_rotone(argv[1]);
    }
    write(1,"\n",1);
    return 0;
}