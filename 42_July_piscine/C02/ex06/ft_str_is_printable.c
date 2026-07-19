/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 21:19:00 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/09 21:34:36 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
        char    *str1 = " asd";
        char    *str2 = "\t";
        char    *str3 = "";

        printf("%d\n", ft_str_is_printable(str1));
        printf("%d\n", ft_str_is_printable(str2));
        printf("%d\n", ft_str_is_printable(str3));
}
*/
