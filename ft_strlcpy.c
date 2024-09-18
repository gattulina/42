/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgattuso <lgattuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:46:33 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/18 10:48:05 by lgattuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (n == 0)
		return (i);
	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < n)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*src = "22";
	char	dest[15];

	printf("%zu\n", ft_strlcpy(dest, src, sizeof(dest)));
	printf("%zu\n", strlcpy(dest, src, sizeof(dest)));
	return (0);
}
*/