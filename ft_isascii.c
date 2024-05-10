/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:37:59 by lugattus          #+#    #+#             */
/*   Updated: 2024/05/01 17:24:55 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c > 00 && c < 128)
		return (1);
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_isascii('à'));
    printf("%d\n", ft_isascii('9'));
    return(0);    
}*/
/*#include <stdio.h>
#include <ctype.h>
 
int main()
{
   char cadena[] = ";0ñsáR(h&~?RÛ1/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], isascii(cadena[i]));

   return 0;
}*/