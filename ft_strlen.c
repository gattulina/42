/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgattuso <lgattuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:20:25 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/18 10:51:14 by lgattuso         ###   ########.fr       */
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
#include <string.h>

int main(void)
{
    printf("%zu\n", ft_strlen("hola"));
	printf("%lu\n", strlen("hola"));
    return(0);
}*/