/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:03:28 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/14 17:40:16 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i < nb && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[50] = "Hello";
	char	src[] = " World!";
	char	dest2[50] = "42";
	char	src2[] = " Piscine";

	printf("Before:\n");
	printf("dest = \"%s\"\n", dest);

	ft_strncat(dest, src, 3);
	printf("\nAfter ft_strncat(dest, src, 3):\n");
	printf("dest = \"%s\"\n", dest);

	printf("\n----------------------\n");

	printf("Before:\n");
	printf("dest2 = \"%s\"\n", dest2);

	ft_strncat(dest2, src2, 8);
	printf("\nAfter ft_strncat(dest2, src2, 8):\n");
	printf("dest2 = \"%s\"\n", dest2);

	return (0);
}
*/
