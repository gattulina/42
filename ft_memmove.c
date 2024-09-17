/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:47:23 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/17 16:33:22 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *)src;
	if (!src && !dst)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
