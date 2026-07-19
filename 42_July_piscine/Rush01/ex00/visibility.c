/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wegan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 16:07:23 by wegan             #+#    #+#             */
/*   Updated: 2026/07/12 17:33:27 by wegan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible(int *line, int size)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < size)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_visible_reverse(int *line, int size)
{
	int	i;
	int	max;
	int	count;

	i = size - 1;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i--;
	}
	return (count);
}

int	check_visibility(int *line, int size, int left, int right)
{
	if (left && count_visible(line, size) != left)
		return (0);
	if (right && count_visible_reverse(line, size) != right)
		return (0);
	return (1);
}
