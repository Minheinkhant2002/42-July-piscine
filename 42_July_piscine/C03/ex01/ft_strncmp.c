/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 14:05:04 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/13 16:39:17 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("hello vs hello (5) = %d\n", ft_strncmp("hello", "hello", 5));
	printf("abc vs abd (3)     = %d\n", ft_strncmp("abc", "abd", 3));
	printf("abd vs abc (3)     = %d\n", ft_strncmp("abd", "abc", 3));
	printf("cat vs car (3)     = %d\n", ft_strncmp("cat", "car", 3));
	printf("abc vs abcd (3)    = %d\n", ft_strncmp("abc", "abcd", 3));
	printf("abc vs abcd (4)    = %d\n", ft_strncmp("abc", "abcd", 4));
	printf("Apple vs apple (5) = %d\n", ft_strncmp("Apple", "apple", 5));
	printf("hello vs world (0) = %d\n", ft_strncmp("hello", "world", 0));
	printf("abcdef vs abcxyz (3) = %d\n", ft_strncmp("abcdef", "abcxyz", 3));
	printf("abcdef vs abcxyz (4) = %d\n", ft_strncmp("abcdef", "abcxyz", 4));

	return (0);
}
*/
