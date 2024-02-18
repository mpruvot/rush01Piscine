/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpruvot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:02:49 by mpruvot           #+#    #+#             */
/*   Updated: 2024/02/18 12:02:51 by mpruvot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHECKS_H
# define CHECKS_H

int	valid_input(char *str);

int	valid_col_row(int board[4][4], int nb, int row, int col);

int	check_valid_grid(int **board);

#endif
