/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:42:17 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/17 18:35:39 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	size_t	total_len;
	size_t	i;
	size_t	j;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	buffer = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!buffer || !s1 || !s2)
		return (0);
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		buffer[i] = s2[j];
		j++;
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str1 = "Lago Como";
	char	*str2 = "Lago Garda";

	printf("%s", ft_strjoin(str1, str2));
	return (0);
}
*/
