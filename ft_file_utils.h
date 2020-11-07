/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:58:46 by letumany          #+#    #+#             */
/*   Updated: 2020/11/07 12:59:05 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_UTILS_H
# define FT_FILE_UTILS_H

# define SIZE_1B 1
# define SIZE_1K 1024

int		ft_open_file(char *path);

int		ft_close_file(int fd);

#endif
