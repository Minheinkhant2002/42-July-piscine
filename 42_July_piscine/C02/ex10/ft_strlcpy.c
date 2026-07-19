/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 19:13:17 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/11 20:51:15 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	if (i < size)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];
	unsigned int	len;

	len = ft_strlcpy(dest, src, 5);

	printf("Source      : %s\n", src);
	printf("Destination : %s\n", dest);
	printf("Return value: %u\n", len);

	return (0);
}
*/
