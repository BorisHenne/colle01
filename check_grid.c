/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 17:55:57 by sduprey           #+#    #+#             */
/*   Updated: 2014/07/13 17:32:57 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_on_row(char nb, char grid[9][9], int row)
{
	int column;

	column = 0;
	while (column < 9)
	{
		if (grid[column][row] == nb)
			return (1);
		column++;
	}
	return (0);
}

int		is_on_column(char nb, char grid[9][9], int column)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (grid[column][row] == nb)
			return (1);
		row++;
	}
	return (0);
}

int		is_on_block(char nb, char grid[9][9], int column, int row)
{
	int column_end;
	int row_end;

	column_end = column - (column % 3);
	row_end = row - (row % 3);
// DEBUG DEBUG
	printf("block\ncol %d-%d\nrow %d-%d\n", column, column_end, row, row_end);
// ********************
	while (column_end < column)
	{
		while (row_end < row)
		{
			if (grid[column][row] == nb)
				return (1);
			row_end++;
		}
		column_end++;
	}
	return (0);
}
