/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wegan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 16:05:29 by wegan             #+#    #+#             */
/*   Updated: 2026/07/12 17:39:33 by wegan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	copy_row(int **grid, int *line, int row, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		line[i] = grid[row][i];
		i++;
	}
}

void	copy_col(int **grid, int *line, int col, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		line[i] = grid[i][col];
		i++;
	}
}
