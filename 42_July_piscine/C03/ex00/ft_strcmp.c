/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:55:43 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/13 16:28:34 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("hello vs hello = %d\n", ft_strcmp("hello", "hello"));
	printf("abc vs abd     = %d\n", ft_strcmp("abc", "abd"));
	printf("abd vs abc     = %d\n", ft_strcmp("abd", "abc"));
	printf("cat vs car     = %d\n", ft_strcmp("cat", "car"));
	printf("car vs cat     = %d\n", ft_strcmp("car", "cat"));
	printf("abc vs abcd    = %d\n", ft_strcmp("abc", "abcd"));
	printf("abcd vs abc    = %d\n", ft_strcmp("abcd", "abc"));
	printf("Apple vs apple = %d\n", ft_strcmp("Apple", "apple"));

	return (0);
}
*/
