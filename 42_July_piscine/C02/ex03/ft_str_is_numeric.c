/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:51:57 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/09 19:08:16 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
        char    *str1 = "Aa";
        char    *str2 = "iA123 ";
        char    *str3 = "";

        printf("%d\n", ft_str_is_alpha(str1));
        printf("%d\n", ft_str_is_alpha(str2));
        printf("%d\n", ft_str_is_alpha(str3));
}
*/
