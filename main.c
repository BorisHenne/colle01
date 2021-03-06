/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 11:55:30 by bhenne            #+#    #+#             */
/*   Updated: 2014/07/13 21:40:27 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	grid_render(char grid[9][9]);

int main(int argc,char **argv)
{
	int 	column;
	int		row;
	char	grid[9][9];

	column = 0;
	row = 0;
	if (argc == 10)
	{
		while (column < 9)
		{
			row = 0;
			while (row < 9)
			{
				grid[column][row] = argv[column + 1][row];
				row++;
			}
			column++;
		}
		if (grid_is_valid(grid, 0) == 1)
			grid_render(grid);
		else
			ft_putchar('E');
	}
	else
		ft_putchar('e');
	return (0);
}
