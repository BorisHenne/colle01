/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 17:55:57 by sduprey           #+#    #+#             */
/*   Updated: 2014/07/12 20:35:19 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_on_row(char nb, char grid[9][9], int row)
{
	int column;

	column = 0;
	while (row < 9)
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
	while (column < 9)
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
	while (column < column_end)
	{
		while (row < row_end)
		{
			if (grid[column][row] == nb)
				return (1);
			row++;
		}
		column++;
	}
	return (0);
}
