/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_extend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:34:50 by letumany          #+#    #+#             */
/*   Updated: 2020/11/07 12:34:55 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_short_types.h"
#include <stdlib.h>

#include "ft_str.h"

char	*ft_extend_array(char *orig, char *n_cont, UINT old_len, UINT len)
{
	char *dest;

	if (!(dest = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (orig != NULL)
		ft_str_n_copy(dest, orig, old_len);
	ft_str_n_copy(dest + old_len, n_cont, (UINT)(len - old_len));
	return (dest);
}
