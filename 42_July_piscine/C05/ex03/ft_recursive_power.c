/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <mikhant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 21:50:30 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/19 22:10:38 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);

	if (power == 0)
		return (1);

	i = 1;
	if (power >= 1)
		i = nb * ft_recursive_power(nb, (power - 1));
	return (i);
}

// int	main()
// {
// 	int nb = 2;
// 	int	power = 3;

// 	printf("%d\n", ft_recursive_power(nb, power));
// }
