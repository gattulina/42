/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:58:14 by lugattus          #+#    #+#             */
/*   Updated: 2024/05/01 17:24:46 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_isprint(' '));
    printf("%d\n", ft_isprint('~'));
    printf("%d\n", ft_isprint('\n'));
    return(0);
}*/