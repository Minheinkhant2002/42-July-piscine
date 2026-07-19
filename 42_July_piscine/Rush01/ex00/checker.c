/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wegan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 15:46:53 by wegan             #+#    #+#             */
/*   Updated: 2026/07/12 16:13:45 by wegan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		check_visibility(int *line, int size, int left, int right);
void	copy_row(int **grid, int *line, int row, int size);
void	copy_col(int **grid, int *line, int col, int size);

int	check_one_row(int **grid, int size, int *clues, int row)
{
	int		*line;
	int		result;

	line = malloc(sizeof(int) * size);
	if (!line)
		return (0);
	copy_row(grid, line, row, size);
	result = check_visibility(line, size,
			clues[(size * 2) + row],
			clues[(size * 3) + row]);
	free(line);
	return (result);
}

int	check_one_col(int **grid, int size, int *clues, int col)
{
	int		*line;
	int		result;

	line = malloc(sizeof(int) * size);
	if (!line)
		return (0);
	copy_col(grid, line, col, size);
	result = check_visibility(line, size,
			clues[col],
			clues[size + col]);
	free(line);
	return (result);
}

int	check_rows(int **grid, int size, int *clues)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!check_one_row(grid, size, clues, i))
			return (0);
		i++;
	}
	return (1);
}

int	check_columns(int **grid, int size, int *clues)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!check_one_col(grid, size, clues, i))
			return (0);
		i++;
	}
	return (1);
}
