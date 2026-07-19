/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:30:38 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/07 16:57:36 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	temp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int i;

	ft_rev_int_tab(tab, 5);

	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
		if (i < 5)
			printf(", ");
	}
	return(0);
}
*/
