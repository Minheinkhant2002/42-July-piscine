/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 21:48:04 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/04 21:53:11 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_char(int x, int y, int line, int column)
{
	if ((column == 0 || column == x - 1) && (line == 0))
		return ('A');
	else if ((column == 0 || column == x - 1) && (line == y - 1))
		return ('C');
	else if (column == 0 || column == x - 1)
		return ('B');
	else if (line == 0 || line == y - 1)
		return ('B');
	else
		return (' ');
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			ft_putchar(get_char(x, y, line, column));
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
