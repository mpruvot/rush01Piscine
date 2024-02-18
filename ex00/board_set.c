/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsomarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:43:13 by qsomarri          #+#    #+#             */
/*   Updated: 2024/02/18 14:27:44 by qsomarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*puts firts numbers in board depending on up column's arguments*/
void	ft_board_upcol(int **tab, int col[8])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		if (col[i] == 4)
		{
			while (j < 4)
			{
				tab[j][i] = j + 1;
				j++;
			}
		}
		if (col[i] == 1)
			tab[0][i] = 4;
		if (col[i] == 2 && col[i + 4] == 3)
			tab[1][i] = 4;
		i++;
	}
}

/*puts firts numbers in board depending on down column's arguments*/
void	ft_board_downcol(int **tab, int col[8])
{
	int	i;
	int	j;

	i = 0;
	while (i + 4 < 8)
	{
		j = 1;
		if (col[i + 4] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[j][i] = 4 - j;
				j++;
			}
		}
		if (col[i + 4] == 1)
			tab[3][i] = 4;
		if (col[i + 4] == 2 && col[i] == 3)
			tab[2][i] = 4;
		i++;
	}
}

/*puts firts numbers in board depending on left row's arguments*/
void	ft_board_rowleft(int **tab, int row[8])

{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		if (row[i] == 4)
		{
			while (j < 4)
			{
				tab[i][j] = j + 1;
				j++;
			}
		}
		if (row[i] == 1)
			tab[i][0] = 4;
		if (row[i] == 2 && row[i + 4] == 3)
			tab[i][1] = 4;
		i++;
	}
}

/*puts firts numbers in board depending on right row's arguments*/
void	ft_board_rowright(int **tab, int row[8])
{
	int	i;
	int	j;

	i = 0;
	while (i + 4 < 8)
	{
		j = 0;
		if (row[i + 4] == 4)
		{
			j = 0;
			while (j < 4)
			{
				tab[i][j] = 4 - j;
				j++;
			}
		}
		if (row[i + 4] == 1)
			tab[i][3] = 4;
		if (row[i + 4] == 2 && row[i] == 3)
			tab[i][2] = 4;
		i++;
	}
}

void	ft_board_init(int **tab, int row[8], int col[8])
{
	ft_board_upcol(tab, col);
	ft_board_downcol(tab, col);
	ft_board_rowleft(tab, row);
	ft_board_rowright(tab, row);
}
