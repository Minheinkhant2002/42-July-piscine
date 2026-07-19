/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wegan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:11:21 by wegan             #+#    #+#             */
/*   Updated: 2026/07/12 17:18:14 by wegan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	free_rows(int **grid, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

int	**create_grid(int size)
{
	int	**grid;
	int	i;
	int	j;

	grid = malloc(sizeof(int *) * size);
	if (!grid)
		return (0);
	i = 0;
	while (i < size)
	{
		grid[i] = malloc(sizeof(int) * size);
		if (!grid[i])
		{
			free_rows(grid, i);
			return (0);
		}
		j = 0;
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	free_grid(int **grid, int size)
{
	if (!grid)
		return ;
	free_rows(grid, size);
}
