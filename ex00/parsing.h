/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpruvot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:03:06 by mpruvot           #+#    #+#             */
/*   Updated: 2024/02/18 12:03:08 by mpruvot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

void	store_input(char *str, int inputs[16]);

void	parse_col(int inputs[16], int col[8]);

void	parse_row(int inputs[16], int row[8]);

#endif
