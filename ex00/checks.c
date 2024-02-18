/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpruvot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:02:02 by mpruvot           #+#    #+#             */
/*   Updated: 2024/02/18 12:02:10 by mpruvot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_input(char *str)
{
	int	i;
	int	count_numbers;

	i = 0;
	count_numbers = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			count_numbers++;
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				return (0);
		}
		else if (str[i] == ' ')
		{
			if ((str[i + 1] < '1' || str[i + 1] > '4') && str[i + 1] != '\0')
				return (0);
		}
		else
			return (0);
		i++;
	}
	if (count_numbers != 16)
		return (0);
	return (1);
}

int	valid_col_row(int **board, int nb, int row, int col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == nb)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (board[i][col] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	check_valid_grid(int **board)
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			if (!valid_col_row(board, board[col][row], row, col))
				return (0);
			row++;
		}
		col++;
	}
	return (1);
}
