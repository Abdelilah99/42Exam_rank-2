/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:18:25 by anoury            #+#    #+#             */
/*   Updated: 2022/06/25 13:49:57 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str){
    int i;
    i=0;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}
int main(){
    char *str="abdelilah";
    ft_putstr(str);
    return 0;
}