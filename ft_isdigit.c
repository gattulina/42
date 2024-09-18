/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgattuso <lgattuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:14:35 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/18 11:49:07 by lgattuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", ft_isdigit(9));
    return(0);   
}*/