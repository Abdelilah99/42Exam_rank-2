/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:11:08 by anoury            #+#    #+#             */
/*   Updated: 2022/06/25 14:50:27 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str){
    int i;
    i =0;
    while (str[i])
    {
        i++;
    }
    return i;
}
int main(){
    char *str="abdelilah";
    printf("%d",ft_strlen(str));
    return 0;
}