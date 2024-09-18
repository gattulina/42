/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgattuso <lgattuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:49:03 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/18 12:53:01 by lgattuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* 
int main(void)
{
    char str[] = "Hola";
    char str2[] = "Hello";
    
    printf("Original string: %s\n", str);
    bzero(str, 2);
    printf("bzero func str: %s\n", str);
    ft_bzero(str2, 2);
    printf("ft_bzero modified str: %s\n", str2);
    return (0);
}*/