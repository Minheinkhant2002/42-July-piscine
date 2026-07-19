/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wegan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 16:54:33 by wegan             #+#    #+#             */
/*   Updated: 2026/07/12 18:25:34 by wegan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	count_clues(char *str, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= size + '0')
			count++;
		i++;
	}
	return (count);
}

int	parse_clues(char *str, int *clues, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= size + '0')
		{
			clues[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (j == size * 4);
}
