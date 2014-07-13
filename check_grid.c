/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 17:55:57 by sduprey           #+#    #+#             */
/*   Updated: 2014/07/13 19:53:26 by sduprey          ###   ########.fr       */
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
	int column_start;
	int row_start;
	int row_base;

	column_start = column - (column % 3);
	row_start = row - (row % 3);
	row_base = row;
// DEBUG DEBUG
	printf("block\ncol %d-%d\nrow %d-%d\n", column_start, column, row_start, row);
// ********************
	while (column_start < row + 3)
	{
		while (row_start < row + 3)
		{
			//row = row_base;
			// DEBUG
			printf("check block %d %d\n", row_start, column_start);
			// *****************
			if (grid[column][row] == nb)
				return (1);
			row_start++;
		}
		column_start++;
	}
	return (0);
}
