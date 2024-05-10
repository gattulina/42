/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:25:44 by lugattus          #+#    #+#             */
/*   Updated: 2024/05/01 17:24:42 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d = (char *)dst;
	const char *s = (const char *)src;
	
	size_t	i;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return d;
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