/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:23:57 by lugattus          #+#    #+#             */
/*   Updated: 2024/08/24 14:53:15 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dic;

	dic = malloc (count * size);
	if (dic == NULL)
		return (NULL);
	ft_bzero (dic, count * size);
	return (dic);
}

/* count es el numero de bloques a ser alocados
y size es el tamaño de cada bloque en bytes*/