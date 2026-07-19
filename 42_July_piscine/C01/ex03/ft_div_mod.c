/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 13:01:54 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/07 13:08:11 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main (void)

{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d, mod: %d\n", div, mod);
	return 0;
}
*/
