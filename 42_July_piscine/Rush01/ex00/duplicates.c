/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicates.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wegan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 16:17:27 by wegan             #+#    #+#             */
/*   Updated: 2026/07/12 17:39:53 by wegan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_rows(int **grid, int size, int *clues);
int	check_columns(int **grid, int size, int *clues);

int	check_duplicates(int **grid, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			k = j + 1;
			while (k < size)
			{
				if (grid[i][j] && grid[i][j] == grid[i][k])
					return (0);
				if (grid[j][i] && grid[j][i] == grid[k][i])
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_all(int **grid, int size, int *clues)
{
	if (!check_duplicates(grid, size))
		return (0);
	if (!check_rows(grid, size, clues))
		return (0);
	if (!check_columns(grid, size, clues))
		return (0);
	return (1);
}
