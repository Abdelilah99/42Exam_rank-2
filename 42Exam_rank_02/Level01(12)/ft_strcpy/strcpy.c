/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:45:50 by anoury            #+#    #+#             */
/*   Updated: 2022/06/25 14:00:38 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *s1,char *s2)
{
    int i;
    i=0;
    while (s2[i])
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
    return (s1);
    
}
int main(){
    char *str1;
    char *str2="abdelilah";
    printf("%s",ft_strcpy(str1,str2));
    return 0;
}