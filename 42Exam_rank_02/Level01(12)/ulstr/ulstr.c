/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:31:08 by anoury            #+#    #+#             */
/*   Updated: 2022/06/27 18:46:43 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void ft_ulstr(char *str){
    int i;
    i =0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        str[i]=str[i] + 32;
        else if(str[i] >= 'a' && str[i]<='z')
        str[i]=str[i] - 32;
        write(1,&str[i],1);
        i++;
    }
    
}
int main(int argc,char **argv){
    if (argc == 2)
    {
        ft_ulstr(argv[1]);
    }
    write(1,"\n",1);
    return 0;
    
}