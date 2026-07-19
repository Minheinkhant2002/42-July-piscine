/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 14:26:43 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/07 15:11:55 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	int	len;
	char	*str;

	*str = "Hello";
	len = ft_strlen(str);
	printf("%d\n", len);	
	return (0);
}
*/
