/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:35:09 by letumany          #+#    #+#             */
/*   Updated: 2020/11/07 12:35:12 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
#include "ft_is.h"

t_bool	x_is_operator(char c)
{
	return (c == '-' || c == '+');
}

int		ft_atoi(char *str)
{
	int	result;
	int	minus;

	minus = 1;
	while (ft_is_whitespace(*str))
		str++;
	if (x_is_operator(*str))
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (ft_is_number(*str))
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	return (result * minus);
}
