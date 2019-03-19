/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 09:43:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/19 00:08:55 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char *av[])
{
	t_game	tetromino;
	ssize_t	fd;

	if (ac != 2)
		EXIT(USAGE);
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		EXIT(ERROR);
	tetromino = read_pieces(fd);
	fill_board(tetromino);
	return (0);
}
