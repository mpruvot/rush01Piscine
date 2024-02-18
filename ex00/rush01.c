/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpruvot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:53:37 by mpruvot           #+#    #+#             */
/*   Updated: 2024/02/18 14:33:06 by mpruvot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "board.h"
#include "checks.h"
#include "parsing.h"
#include "display.h"
#include "board_set.h"
#include "check_argv.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	**board;
	int	inputs[16];
	int	col[8];
	int	row[8];

	if (argc == 2)
	{
		if (!valid_input(argv[1]))
		{
			error_and_return();
			return (-1);
		}
		store_input(argv[1], inputs);
		parse_col(inputs, col);
		parse_row(inputs, row);
		if (!check_argv(col, row))
		{
			error_and_return();
			return (-1);
		}
		board = initialize_board();
		ft_board_init(board, row, col);
		display_board(board);
		free_board(board);
	}
}
