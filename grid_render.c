/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 20:54:34 by sduprey           #+#    #+#             */
/*   Updated: 2014/07/13 21:32:10 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	grid_render(char grid[9][9])
{
	int column;
	int row;

	column = 0;
	row = 0;
	while (column < 9)
	{
		row = 0;
		while (row < 9)
		{
			ft_putchar(grid[column][row]);
			if (row != 8)
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		column++;
	}
}
