/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_is_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 19:32:39 by sduprey           #+#    #+#             */
/*   Updated: 2014/07/13 15:56:10 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		grid_is_valid(char grid[9][9], int pos)
{
	int		column;
	int		row;
	char	nb;

	if (pos == 9 * 9)
		return (1);
	column = pos / 9;
	row = pos % 9;
//
	printf("col : %d row : %d\n", column, row);
//
	if (grid[column][row] != '.')
		return (grid_is_valid(grid, pos + 1));
	nb = '1';
	while (nb <= '9')
	{
		// A SUPPRIMER
		printf("nb : %c\npos : %d\n", nb, pos);
		//
		if (!is_on_row(nb, grid, row) &&
			!is_on_column(nb, grid, column) &&
			!is_on_block(nb, grid, column, row))
		{
			grid[column][row] = nb;
			if (grid_is_valid(grid, pos + 1))
				return (1);
		}
		nb++;
	}
	grid[column][row] = '.';
	return (0);
}