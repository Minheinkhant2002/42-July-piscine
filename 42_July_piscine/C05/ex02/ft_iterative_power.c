/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <mikhant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 21:32:32 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/19 22:10:40 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);

	if (power == 0)
		return (1);

	i = 1;
	while (power >= 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

// int	main()
// {
// 	int	nb = 2;
// 	int	power = 5;

// 	printf("%d\n", ft_iterative_power(nb, power));
// }
