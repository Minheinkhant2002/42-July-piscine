/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 14:18:43 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/05 16:20:58 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_char(int x, int y, int line, int column)
{
	if ((column == 0 || column == x - 1) && (line == 0))
		return ('o');
	else if ((column == 0 || column == x - 1) && (line == y - 1))
		return ('o');
	else if (column == 0 || column == x - 1)
		return ('|');
	else if (line == 0 || line == y - 1)
		return ('-');
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
