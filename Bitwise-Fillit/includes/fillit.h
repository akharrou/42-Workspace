/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 09:33:11 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/17 21:41:09 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# include "libft/Includes/libft.h"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# define MAX_BOARD_SIZE     16
# define PADDING            16
# define MAX_PIECES         26 // we stopped here

# define BLOCKS_PER_PIECE   4
# define PIECE_ROWS         4
# define PIECE_COLS         4
# define PIECE_SIZE         20
# define PIECE_SIZE         20
# define NEWLINE            1
# define NULL_TERM          1

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

typedef struct	s_tetromino_board
{
	t_uint16	matrix[MAX_BOARD_SIZE + PADDING];
	t_uint8		size;
	t_uint64	barrier;
}				t_board;

typedef struct	s_tetromino_piece
{
	t_char		id;
	t_uint64	piece;
	t_uint8     height;
	t_uint8     width;
	t_uint8		row_from_where_it_was_placed_when_solving_it_so_that_we_can_know_where_to_print_it;
	t_uint8		col_from_where_it_was_placed_when_solving_it_so_that_we_can_know_where_to_print_it;
}				t_piece;

typedef struct	s_tetromino_game
{
	t_piece		pieces[MAX_PIECES];
	t_uint8		num_pieces;
	t_board		board;
}				t_game;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/



/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/


/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# define USAGE "usage: ./fillit file"
# define INVALID_INPUT "error"
# define ERROR "error"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

t_game			read_pieces(ssize_t fd);

void			fill_board(t_game tetromino);
void			place_next_pieces(t_game tetromino);

void			print_board(t_board board);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif






/* BIT IMPLEMENTATION HEADER FILE */

#ifndef FILLIT_H
# define FILLIT_H

# include <string.h>
# include <stdint.h>

# define MAX_TETRI 26

typedef struct s_etris	t_etris;

struct				s_etris
{
	uint64_t			value;
	t_etris				*last;
	unsigned char		id;
	unsigned char		x;
	unsigned char		y;
	unsigned char		width;
	unsigned char		height;
};

int					read_tetri(const int fd, t_etris *tetris);
int					solve(t_etris *tetris, const int count, uint16_t *map);
int					check_piece(const t_etris *tetris, uint16_t *map);
void				toggle_piece(const t_etris *tetris, uint16_t *map);

#endif












