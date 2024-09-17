/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:20:25 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/17 18:22:22 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *x)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
int main(void)
{
    printf("%d", ft_strlen("hola"));
    return(0);
}*/