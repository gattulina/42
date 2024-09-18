/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgattuso <lgattuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:43:02 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/18 11:36:51 by lgattuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && s1[i] != '\0')
		s1++;
	i = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	return (ft_substr((char *)s1, 0, i + 1));
}

/*#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*set;

	str = " holo ";
	set = ".";
	printf("ft_ result: %s", ft_strtrim(str, set));
	return (0);
}*/
