/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv_comp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsomarri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:22:43 by qsomarri          #+#    #+#             */
/*   Updated: 2024/02/18 14:34:50 by qsomarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*check if arguments put in up column are compatible
 with arguments put in dowm column*/
int	check_argv_col1(int *col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col[i] == 4)
		{
			if (col[i + 4] != 1)
				return (0);
		}
		if (col[i] == 3)
		{
			if (col[i + 4] != 1 && col[i + 4] != 2)
				return (0);
		}
		i++;
	}
	return (1);
}

int	check_argv_col2(int *col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col[i] == 2)
		{
			if (col[i + 4] == 4)
				return (0);
		}
		if (col[i] == 1)
		{
			if (col[i + 4] == 1)
				return (0);
		}
		i++;
	}
	return (1);
}

/*check if arguments put in left row are compatible
 with arguments put in right row*/
int	check_argv_row1(int *row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row[i] == 4)
		{
			if (row[i + 4] != 1)
				return (0);
		}
		if (row[i] == 3)
		{
			if (row[i + 4] != 1 && row[i + 4] != 2)
				return (0);
		}
		i++;
	}
	return (1);
}

int	check_argv_row2(int *row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row[i] == 2)
		{
			if (row[i + 4] == 4)
				return (0);
		}
		if (row[i] == 1)
		{
			if (row[i + 4] == 1)
				return (0);
		}
		i++;
	}
	return (1);
}

/*check if there is no solution for these arguments*/
int	check_argv(int *col, int *row)
{
	if (check_argv_col1(col) == 0 || check_argv_col2(col) == 0)
		return (0);
	else if (check_argv_row1(row) == 0 || check_argv_row2(row) == 0)
		return (0);
	else
		return (1);
}
