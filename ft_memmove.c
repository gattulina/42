/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:47:23 by lugattus          #+#    #+#             */
/*   Updated: 2024/05/01 17:12:58 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t 	i;
	char	*dest;
	char	*source;
	
	i = 0;
	dest = (char *) dst;
	source = (char *)src;
	if (!src && !dst)
	{
		return (NULL);
	}
	if (dest > source) 
	{
		while (len-- > 0)
		{
			dest[len] = source[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
