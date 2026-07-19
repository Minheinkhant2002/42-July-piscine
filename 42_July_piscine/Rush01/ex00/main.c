/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wegan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:40:57 by wegan             #+#    #+#             */
/*   Updated: 2026/07/12 18:41:10 by wegan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		count_clues(char *str, int size);
int		parse_clues(char *str, int *clues, int size);

int		**create_grid(int size);
void	free_grid(int **grid, int size);

int		solve(int **grid, int size, int *clues);

void	print_grid(int **grid, int size);
void	print_error(void);

int	init_game(char *str, int size, int ***grid, int **clues)
{
	if (count_clues(str, size) != size * 4)
		return (0);
	*clues = malloc(sizeof(int) * size * 4);
	if (!*clues)
		return (0);
	if (!parse_clues(str, *clues, size))
		return (0);
	*grid = create_grid(size);
	if (!*grid)
	{
		free(*clues);
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	size;
	int	*clues;
	int	**grid;

	size = 4;
	if (argc != 2)
		return (print_error(), 1);
	if (!init_game(argv[1], size, &grid, &clues))
		return (print_error(), 1);
	if (solve(grid, size, clues))
		print_grid(grid, size);
	else
		print_error();
	free_grid(grid, size);
	free(clues);
	return (0);
}
