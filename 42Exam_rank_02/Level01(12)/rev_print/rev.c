/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:35:58 by anoury            #+#    #+#             */
/*   Updated: 2022/06/27 13:39:23 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str){
    int i;
    i=0;
    while (str[i])
    {
        i++;
    }
    return i;
}
void rev_print(char *str){
    int i;
    i =ft_strlen(str);
    while (i)
    {
        write(1,str + i -1,1 );
        i--;
    }
    
}
int main(int argc,char **argv){
    if (argc==2)
    {
        rev_print(argv[1]);
    }
    write(1,"\n",1);
    return 0;
}