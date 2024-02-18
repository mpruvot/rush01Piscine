/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpruvot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:02:28 by mpruvot           #+#    #+#             */
/*   Updated: 2024/02/18 12:02:31 by mpruvot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	store_input(char *str, int inputs[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			inputs[j] = str[i] - '0';
			j++;
		}
		i++;
	}
}

void	parse_col(int inputs[16], int col[8])
{
	int	i;

	i = 0;
	while (i < 8)
	{
		col[i] = inputs[i];
		i++;
	}
}

void	parse_row(int inputs[16], int row[8])
{
	int	i;
	int	index;

	i = 0;
	index = 8;
	while (i < 8)
	{
		row[i] = inputs[index];
		i++;
		index++;
	}
}
