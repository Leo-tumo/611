/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:36:09 by letumany          #+#    #+#             */
/*   Updated: 2020/11/07 12:36:10 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		ft_open_file(char *path)
{
	return (open(path, O_RDONLY));
}

int		ft_close_file(int fd)
{
	return (close(fd));
}
