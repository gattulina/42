/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:49:47 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/16 15:51:07 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	slen;

	len = 0;
	slen = ft_len(src);
	while (*dst && size > 0)
	{
		dst++;
		len++;
		size--;
	}
	while (*src && size -- > 1)
		*dst++ = *src++;
	if (size == 1 || *src == 0)
		*dst = '\0';
	return (slen + len);
}
