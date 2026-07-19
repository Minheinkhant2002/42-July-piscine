/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:24:09 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/19 19:58:23 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find [j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";
	char	*result;

	result = ft_strstr(str, "Wo");
	printf("Test 1: %s\n", result);

	result = ft_strstr(str, "Hello");
	printf("Test 2: %s\n", result);

	result = ft_strstr(str, "lo Wo");
	printf("Test 3: %s\n", result);

	result = ft_strstr(str, "XYZ");
	if (result == NULL)
		printf("Test 4: Not found\n");
	else
		printf("Test 4: %s\n", result);

	result = ft_strstr(str, "");
	printf("Test 5: %s\n", result);

	return (0);
}

