/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xirwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 18:15:28 by xirwang           #+#    #+#             */
/*   Updated: 2026/07/04 18:16:55 by xirwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_char(int x, int y, int i, int line)
{
	if ((line == 0 || line == y - 1) && (i == 0 || i == x - 1))
	{
		if (i == 0)
			return ('A');
		else
			return ('C');
	}
	else if (line == 0 || line == y - 1)
		return ('B');
	else if (i == 0 || i == x - 1)
		return ('B');
	else
		return (' ');
}

void	rush(int x, int y)
{
	int	line;
	int	i;

	line = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (line < y)
	{
		i = 0;
		while (i < x)
		{
			ft_putchar(get_char(x, y, i, line));
			i++;
		}
		ft_putchar('\n');
		line++;
	}
}
