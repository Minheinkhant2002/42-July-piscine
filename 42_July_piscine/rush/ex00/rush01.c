/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:29:10 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/05 17:54:14 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_char(int x, int y, int line, int column)
{
	if (column == 0 && line == 0)
		return ('/');
	else if (line == 0 && column == x - 1)
		return ('\\');
	else if (column == 0 && line == y - 1)
		return ('\\');
	else if (line == y - 1 && column == x - 1)
		return ('/');
	else if (line == 0 || line == y - 1)
		return ('*');
	else if (column == 0 || column == x - 1)
		return ('*');
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
