/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_set.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpruvot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:22:34 by mpruvot           #+#    #+#             */
/*   Updated: 2024/02/18 12:22:37 by mpruvot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_SET_H
# define BOARD_SET_H

void	ft_board_upcol(int **tab, int col[8]);

void	ft_board_downcol(int **tab, int col[8]);

void	ft_board_rowleft(int **tab, int row[8]);

void	ft_board_rowright(int **tab, int row[8]);

void	ft_board_init(int **tab, int row[8], int col[8]);

#endif
