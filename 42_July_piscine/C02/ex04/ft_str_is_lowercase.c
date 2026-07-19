/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:08:49 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/09 19:30:12 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
        char    *str1 = "aaaa";
        char    *str2 = "123";
        char    *str3 = "";

        printf("%d\n", ft_str_is_lowercase(str1));
        printf("%d\n", ft_str_is_lowercase(str2));
        printf("%d\n", ft_str_is_lowercase(str3));
}
*/
