/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:24:25 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/16 17:26:27 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen (s + start))
		len = ft_strlen(s + start);
	buffer = (char *)malloc(sizeof(char) * (len +1));
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s + start, len + 1);
	return (buffer);
}
