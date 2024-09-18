/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugattus <lugattus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:44:32 by lugattus          #+#    #+#             */
/*   Updated: 2024/09/16 18:41:01 by lugattus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
    if (s)
        write (fd, s, ft_strlen(s));
}

/*int	main(void)
{
	char	*str = "string";

	ft_putstr_fd(str, 1);
	return (0);
}*/