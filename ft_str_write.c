/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_write.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:39:41 by letumany          #+#    #+#             */
/*   Updated: 2020/11/07 12:39:43 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"

void	ft_str_write_to(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_str_write(char *str)
{
	ft_str_write_to(OUT, str);
}
