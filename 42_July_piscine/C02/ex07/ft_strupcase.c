/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 21:40:52 by mikhant           #+#    #+#             */
/*   Updated: 2026/07/09 22:22:56 by mikhant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
/*
int main(void)
{
        char    str1[] = "avcdEf";
        char    str2[] = "aA";

        printf("%s\n", ft_strupcase(str1));
        printf("%s\n", ft_strupcase(str2));
//        printf("%d\n", ft_strupcase(str3));
}
*/
