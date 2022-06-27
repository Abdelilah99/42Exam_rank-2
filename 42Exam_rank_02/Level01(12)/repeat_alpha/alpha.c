/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:50:39 by anoury            #+#    #+#             */
/*   Updated: 2022/06/25 18:32:31 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc,char **argv){
    int i;
    i=0;
    if (argc==2)
    {
        int letter;
        letter=0;
        while (argv[1][i])
        {
            if (argv[1][i]>= 'A' && argv[1][i]<='Z')
            {
               letter = argv[1][i] - 64;
               while (letter--)
               write(1,&argv[1][i],1);
               
            }
            else if (argv[1][i]>='a' && argv[1][i]<='z')
            {
                letter = argv[1][i] - 96;
                while (letter --)
                write(1,&argv[1][i],1);
                
            }
            else 
            write(1,&argv[1][i],1);
            i++;
            
            
        }
        
    }
    write(1,"\n",1);
    return 0;    
}