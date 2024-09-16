/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:46:33 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/16 15:51:24 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy(char * dst, char * src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		while (src[i])
			i++;
	return (i);
	while (src[i] != '\0' && i < (dstsize - 1))
/* only copy up to the first nul is reached */
/* Always copy 1 less then the destination to make room for the nul */
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0'; /*nul terminate the string */
	while (src[i] != '\0')
		i++;
	return (i); /*Return the number of bytes copied */
}
