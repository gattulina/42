/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:30:17 by lugattus          #+#    #+#             */
/*   Updated: 2024/05/01 17:30:54 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*aux;

	aux = b;
	while (len > 0)
	{
		*aux = (unsigned char) c;
		aux++;
		len--;
	}
	return (aux);
}

/*
#include <string.h> 
int main(void)
{
    char    str[5] = "Hola";
    
    printf("%s\n", (char *)memset(str +1, '0', 1));
    printf("%s\n", (char *)ft_memset(str +1, '0', 1)); 
}*/