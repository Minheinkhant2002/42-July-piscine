/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wegan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 16:23:17 by wegan             #+#    #+#             */
/*   Updated: 2026/07/12 18:24:37 by wegan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	check_all(int **grid, int size, int *clues);

int	find_empty(int **grid, int size, int *row, int *col)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (grid[i][j] == 0)
			{
				*row = i;
				*col = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_row_number(int **grid, int size, int row, int num)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (grid[row][i] == num)
			count++;
		i++;
	}
	return (count <= 1);
}

int	check_col_number(int **grid, int size, int col, int num)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (grid[i][col] == num)
			count++;
		i++;
	}
	return (count <= 1);
}

int	is_valid(int **grid, int size, int row, int col)
{
	int	num;

	num = grid[row][col];
	if (!check_row_number(grid, size, row, num))
		return (0);
	if (!check_col_number(grid, size, col, num))
		return (0);
	return (1);
}

int	solve(int **grid, int size, int *clues)
{
	int	row;
	int	col;
	int	num;

	if (!find_empty(grid, size, &row, &col))
		return (check_all(grid, size, clues));
	num = 1;
	while (num <= size)
	{
		grid[row][col] = num;
		if (is_valid(grid, size, row, col))
		{
			if (solve(grid, size, clues))
				return (1);
		}
		grid[row][col] = 0;
		num++;
	}
	return (0);
}
