/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:24:12 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/16 15:20:25 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*buffer;
	size_t	count;

	count = ft_strlen(s1);
	buffer = (char *)malloc((count + 1) * sizeof(char));
	if (buffer == 0)
		rerturn (0);
	else
	{
		ft_memcpy(buffer, s1, count + 1);
	}
	return (buffer);
}
