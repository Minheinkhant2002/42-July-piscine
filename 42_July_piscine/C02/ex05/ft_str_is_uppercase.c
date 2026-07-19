/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 19:31:29 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/09 21:21:19 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
        char    *str1 = "AAAAA";
        char    *str2 = "aA";
        char    *str3 = "";

        printf("%d\n", ft_str_is_uppercase(str1));
        printf("%d\n", ft_str_is_uppercase(str2));
        printf("%d\n", ft_str_is_uppercase(str3));
}
*/
