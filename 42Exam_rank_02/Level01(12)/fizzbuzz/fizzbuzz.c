/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:48:48 by anoury            #+#    #+#             */
/*   Updated: 2022/06/24 18:12:50 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
        write(1,&c,1);
}
void ft_putnbr(int n)
{
        if (n>=10)
        ft_putnbr(n/10);
        ft_putchar( n%10 + '0');
}

int main(){
    int i;
    i =1;
    while (i <= 100)
    {
        if(i % 3 ==0 && i % 5 ==0)
        {
            write(1,"fizzbuzz",8);
        }
        else if(i % 3 == 0)
        {
            write(1,"fizz",4);
        }
        else if(i % 5 == 0){
            write(1,"buzz",4);
        }
        else
        ft_putnbr(i);
        write(1,"\n",1);
        i++; 
        
    }
    return 0;
    
}