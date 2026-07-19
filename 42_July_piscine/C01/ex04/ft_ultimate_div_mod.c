/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C01ex04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 13:10:38 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/07 13:17:37 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 10;
	int b = 3;

	ft_ultimate_div_mod(&a ,&b);

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return(0);
}
*/
