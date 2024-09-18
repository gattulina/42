/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgattuso <lgattuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:25:44 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/18 17:45:56 by lgattuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!dst && !src && n > 0)
		return (NULL);
	d = (char *) dst;
	s = (const char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
#include <string.h>
int main(void)
{
	const char src[50] = "Input for test";
	char dst[50];
	ft_memcpy(dst, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dst);

	memcpy(dst, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dst);
	return(0);
}*/