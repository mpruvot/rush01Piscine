/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpruvot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:01:47 by mpruvot           #+#    #+#             */
/*   Updated: 2024/02/18 14:35:07 by mpruvot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"
#include <stdlib.h>

int	**initialize_board(void)
{
	int	i;
	int	j;
	int	**board;

	i = -1;
	board = malloc(sizeof(int *) * 4);
	if (!board)
		return (NULL);
	while (++i < 4)
	{
		board[i] = malloc(sizeof(int) * 4);
		if (!board[i])
			return (NULL);
	}
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			board[i][j] = 0;
	}
	return (board);
}

void	display_board(int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(board[i][j] + '0');
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	free_board(int **board)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(board[i]);
		i++;
	}
	free(board);
}
