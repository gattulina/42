/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:43:02 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/17 18:52:58 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_first_position(char const *str)
{
	int	i;

	i = 0;
	while (is_white_space(str[i]))
		i += 1;
	return (i);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;/*unsigned int?*/
	char	*buffer;

	if (!buffer)
		return (0);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n');
		i++; //is white space
}
