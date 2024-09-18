/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgattuso <lgattuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:30:17 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/18 11:51:08 by lgattuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

/*
#include <string.h> 
int main(void)
{
    char    str[5] = "Hola";
    
    printf("%s\n", (char *)memset(str +1, '0', 1));
    printf("%s\n", (char *)ft_memset(str +1, '0', 1)); 
}*/