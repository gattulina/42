/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:26:48 by lugattus          #+#    #+#             */
/*   Updated: 2024/05/01 17:29:32 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) ||(c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('2'));
    return (0);
}*/