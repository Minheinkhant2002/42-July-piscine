#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


//// Aff_a.c
// int	main(int ac, char **av)
// {
// 	int	i;

// 	if (ac != 2)
// 		write (1, "a", 1);
// 	else
// 	{
// 		i = 0;
// 		while (av[1][i])
// 		{
// 			if (av[1][i] == 'a')
// 			{
// 				write (1, "a", 1);
// 				break;
// 			}
// 			i++;
// 		}
// 	}
// 	write (1, "\n", 1);
// 	return (0);
// }


//// ft_print_numbers
// void	ft_print_numbers(void)
// {
// 	char	i;

// 	i = '0';
// 	while (i <= '9')
// 	{
// 		write (1, &i, 1);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	ft_print_numbers();
// 	write(1, "\n", 1);
// 	return (0);
// }


//// void	maff_alpha(void)
// {
// 	char	str = 'a';
// 	int		i = 0;
// 	while (str <= 'z')
// 	{
// 		if (i % 2 == 0)
// 			write (1, &str, 1);
// 		else
// 		{
// 			str -= 32;
// 			write (1, &str, 1);
// 			str += 32;
// 		}
// 		str++;
// 		i++;
// 	}
// 	write (1, "\n", 1);
// }
// int	main(void)
// {
// 	maff_alpha();
// 	return (0);
// }
// int	main(void)
// {
// 	write (1, "aBcDeFgHiJkLnMoPqRsTuVwXyZ\n", 1);
// 	return (0);
// }


//// aff_first_param
// int	main(int ac, char **av)
// {
// 	int	i = 0;

// 	if (ac > 1)
// 		while (av[1][i])
// 		{
// 			write (1, &av[1][i], 1);
// 			i++;
// 		}
// 	write (1, "\n", 1);
// 	return (0);
// }


//// aff_last_param
// int	main(int ac, char **av)
// {
// 	int i = 0;

// 	if (ac > 1)
// 		while (av[ac - 1][i])
// 		{
// 			write (1, &av[ac - 1][i], 1);
// 			i++;
// 		}
// 	write (1, "\n", 1);
// 	return (0);
// }


//// ft_strcpy
// char	*ft_strcpy(char *src, char *dest)
// {
// 	int i = 0;
// 	while (src[i])
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }
// int	main()
// {
// 	char src[] = "Hello";
// 	char dest[50];
// 	printf("%s\n", ft_strcpy(src, dest));
// }


//// strlen
// int	ft_strlen(char *str)
// {
// 	int len;

// 	len = 0;
// 	while (str[len])
// 		len++;
// 	return (len);
// }
// int	main()
// {
// 	char str[] = "Hello";

// 	printf("%d\n", ft_strlen(str));
// 	return (0);
// }


//// repeat alpha
// int	repeat_alpha(char str)
// {
// 	int	repeat;
// 	if (str >= 'a' && str <= 'z')
// 		repeat = str - 'a' + 1;
// 	else if (str >= 'A' && str <= 'Z')
// 		repeat = str - 'A' + 1;
// 	else
// 		repeat = 1;
// 	return (repeat);
// }

// int	main()
// {
// 	char	str[] = "Hello";
// 	int	i = 0;
// 	int j;

// 	while (str[i])
// 	{
// 		j = 0;
// 		while (j < repeat_alpha(str[i]))
// 		{
// 			write (1, &str[i], 1);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }


// int	main(int ac, char **av)
// {
// 	int i = 0;
// 	if (ac != 4)
// 	{
// 		write (1, "\n", 1);
// 		return (0);
// 	}
// 	while (av[1][i] != '\0')
// 	{
// 		if (av[1][i] == av[2][0])
// 			av[1][i] = av[3][0];
// 		write (1, &av[1][i], 1);
// 		i++;
// 	}
// 	write (1, "\n", 1);
// 	return (1);
// }

//// ulstar
// void	ulstr(char *str)
// {
// 	int i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 		{
// 			str[i] -= 32;
// 			write (1, &str[i], 1);
// 		}
// 		else if (str[i] >= 'A' && str[i] <= 'Z')
// 		{
// 			str[i] += 32;
// 			write (1, &str[i], 1);
// 		}
// 		else
// 			write (1, &str[i], 1);
// 		i++;
// 	}
// }

// int	main(int ac, char **av)
// {
// 	if (ac != 2)
//  {
//		write(1, "\n", 1);
//      return 0;
//   }
//  ulstr(av[1]);
// 	write(1, "\n", 1);
// 	return (0);
// }

//// rot_13
// void	rot_13(char *str)
// {
// 	int	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if ((str[i] >= 'a' && str[i] <= 'n') || (str[i] >= 'A' && str[i] <= 'N'))
// 		{
// 			str[i] = str[i] + 13;
// 			write (1, &str[i], 1);
// 		}
// 		else if ((str[i] >= 'm' && str[i] <= 'z') || (str[i] >= 'M' && str[i] <= 'Z'))
// 		{
// 			str[i] = str[i] - 13;
// 			write (1, &str[i], 1);
// 		}
// 		else
// 			write(1, &str[i], 1);
// 		i++;
// 	}
// }

// int	main(int ac, char **av)
// {
// 	if (ac != 2)
// 	{
// 		write(1, "\n", 1);
// 		return (0);
// 	}
// 	rot_13(av[1]);
// 	write (1, "\n", 1);
// 	return (0);
// }

//// rot_13
// int main(int ac, char **av)
// {
// 	int i = 0;

// 	if (ac == 2)
// 	{
// 		while (av[1][i] != '\0')
// 		{
// 			if ((av[1][i] >= 'a' && av[1][i] <= 'n') || (av[1][i] >= 'A' && av[1][i] <= 'N'))
// 			{
// 				av[1][i] = av[1][i] + 13;
// 				write(1, &av[1][i], 1);
// 			}
// 			else if ((av[1][i] >= 'm' && av[1][i] <= 'z') || (av[1][i] >= 'M' && av[1][i] <= 'Z'))
// 			{
// 				av[1][i] = av[1][i] - 13;
// 				write(1, &av[1][i], 1);
// 			}
// 			else
// 			{
// 				write(1, &av[1][i], 1);
// 			}

// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

//// first_word
// int	main(int ac, char **av)
// {
// 	int i = 0;
// 	if (ac == 2)
// 	{
// 		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
// 			i++;
// 		while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
// 		{
// 			write(1, &av[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write (1, "\n", 1);
// 	return (0);
// }

// //fizzbuzz
// int	main(void)
// {
// 	int number = 1;
// 	while (number <= 100)
// 	{
// 		if (number % 3 == 0 && number % 5 == 0)
// 			write (1, "fizzbuzz", 8);
// 		else if (number % 3 == 0)
// 			write (1, "fizz", 4);
// 		else if (number % 5 == 0)
// 			write (1, "buzz", 4);
// 		else
// 		{
// 			if (number == 100)
// 				write(1, "100", 3);
// 			else
// 			{
// 				if (number > 9)
// 					write(1, &"0123456789"[number / 10], 1);
// 				write (1, &"0123456789"[number % 10], 1);
// 			}
// 		}
// 		write(1, "\n", 1);
// 		number++;
// 	}
// }


// // ft_putstr
// void	ft_putstr(char *str)
// {
// 	int i = 0;

// 	while (str[i] != '\0')
// 	{
// 		write (1, &str[i], 1);
// 		i++;
// 	}
// }
// int	main()
// {
// 	char str[] = "Hello";
// 	ft_putstr(str);
// }


// //ft_swap
// void	ft_swap(int *a, int *b)
// {
// 	int temp;

// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }
// int	main()
// {
// 	int a = 5;
// 	int b = 9;
// 	ft_swap(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// }


// //rev_print
// char	rev_print(char *str)
// {
// 	int i = 0;

// 	while (str[i] != '\0')
// 		i++;
// 	while (i > 0)
// 	{
// 		write (1, &str[i - 1], 1);
// 		i--;
// 	}
// 	return(0);
// }
// int	main()
// {
// 	char str[] = "Hello";
// 	printf("%c\n", rev_print(str));
// }


// //rotone
// void	rotone(char *str)
// {
// 	int i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
// 		{
// 			str[i] += 1;
// 			write (1, &str[i], 1);
// 		}
// 		else if (str[i] == 'z' || str[i] == 'Z')
// 		{
// 			str[i] -= 25;
// 			write (1, &str[i], 1);
// 		}
// 		i++;
// 	}
// }

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		rotone(av[1]);
// 	write (1, "\n", 1);
// 	return (0);
// }


// //atoi
// int	ft_atoi(const char *str)
// {
// 	int i = 0;
// 	int	sign = 1;
// 	int	result = 0;

// 	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 			i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return (result * sign);
// }

// int	main()
// {
// 	printf("%d\n", ft_atoi("42"));
// 	printf("%d\n", ft_atoi("   42"));
// 	printf("%d\n", ft_atoi("   -42"));
// 	printf("%d\n", ft_atoi("   ++42"));
// 	printf("%d\n", ft_atoi("--42"));
// 	printf("%d\n", ft_atoi("+-42"));
// 	printf("%d\n", ft_atoi("-+42"));
// 	printf("%d\n", ft_atoi("abc42"));
// 	printf("%d\n", ft_atoi("42abc"));
// 	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
// 	printf("%d\n", ft_atoi("0"));
// 	printf("%d\n", ft_atoi(""));
// 	return (0);
// }


// //ft_strdup
// int	ft_strlen(char *src)
// {
// 	int len = 0;

// 	while (src[len] != '\0')
// 		len++;
// 	return (len);
// }

// char *ft_strdup(char *src)
// {
// 	int len;
// 	char *arr;
// 	int i = 0;
// 	len = ft_strlen(src);
// 	arr = malloc((sizeof(char) * len) + 1);
// 	if (!arr)
// 		return (NULL);
// 	while (src[i])
// 	{
// 		arr[i] = src[i];
// 		i++;
// 	}
// 	arr[i] = '\0';
// 	return (arr);
// }

// int	main(void)
// {
// 	char *str = "Hello, 42!";
// 	char *copy;

// 	copy = ft_strdup(str);
// 	printf("Original: %s\n", str);
// 	printf("Copy    : %s\n", copy);
// 	return (0);
// }



//inter
// int	main(int ac, char **av)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	if (ac != 3)
// 	{
// 		write (1, "\n", 1);
// 		return (0);
// 	}
// 	while (av[1][i])
// 	{
// 		j = 0;
// 		while (j < i && (av[1][i] != av[2][j]))
// 			j++;
// 		if (j == i)
// 		{
// 			j = 0;
// 			if ((av[2][j] != av[1][i]) && av[2][j])
// 				j++;
// 			if (av[2][j])
// 				write (1, &av[1][i], 1);
// 		}
// 		i++;
// 	}
// 	write (1, "\n", 1);
// }


//ft_rev_int_tab
// void	ft_rev_int_tab(int *tab, int *size)
// {
// 	int temp;
// 	int	left;
// 	int right;

// 	int left = 0;
// 	int right = size - 1;

// 	while (left < right)
// 	{
// 		temp = tab[left];
// 		tab[left] = tab[right];
// 		tab[right] = temp;
// 		left++;
// 		right--;
// 	}
// }

////strcpy
// char	*ft_strcpy(char *dest, char *src)
// {
// 	int i = 0;
// 	while (src[i])
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }


// //strncpy
// char	*ft_strncpy(char *dest, char *src, unsigned int n)
// {
// 	unsigned int i = 0;

// 	while (i < n && src[i])
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	while (i < n)
// 	{
// 		dest [i++] = '\0';
// 	}

// 	return (dest);

// }
// int main()
// {
// 	char src[10] = "123456789";
// 	char dest[10];
// 	int n = 4;


// 	ft_strncpy(dest, src, n);
// 	int i = 0;
// 	while (dest[i])
// 	{
// 		write(1, &dest[i], 1);
// 		i++;
// 	}
// }


// //ft_str_is_alpha
// int	ft_str_is_alpha(char *str)
// {
// 	int i = 0;
// 	while (str[i])
// 	{
// 		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
// 			return(0);
// 		i++;
// 	}
// 	return (1);
// }


// //ft_strupcase
// char	*ft_strupcase(char *str)
// {
// 	int i = 0;
// while (str[i])
// {
// 	if (str[i] >= 'a' && str[i] <= 'z')
// 		str[i] -= 32;
// 	i++;
// }
// 	return (str);
// }
// int main(void)
// {
//         char    str1[] = "avcdEf";
//         char    str2[] = "aA";

//         printf("%s\n", ft_strupcase(str1));
//         printf("%s\n", ft_strupcase(str2));
// }


// //ft_strcapitalize
// char	*ft_strcapitalize(char *str)
// {
// 	int i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z')
// 			str[i] += 32;
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 		{
// 			if (i == 0 || (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
// 								|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
// 								|| (str[i - 1] >= '0' && str[i - 1] <= '9'))))
// 			{
// 				str[i] -= 32;
// 			}
// 		}
// 		i++;
// 	}
// 	return (str);
// }
// int	main(void)
// {
//     char	str1[] = "Salut dugaud hisuhdi, isdaiiih - 42njad = sad";

// 	printf("%s\n", ft_strcapitalize(str1));
// }


// //ft_strlcpy
// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
// {
// 	unsigned	i;
// 	unsigned	len = 0;

// 	while (src[len])
// 		len++;

// 	i = 0;
// 	if (i < size)
// 	{
// 		while (src[i] != '\0' && i < size - 1)
// 		{
// 			dest[i] = src[i];
// 			i++;
// 		}
// 		dest[i] = '\0';
// 	}
// 	return (len);
// }


// //ft_strcmp
// int	ft_strcmp(char *s1, char *s2)
// {
// 	int i = 0;

// 	while (s1[i] == s2[i] && s1[i] && s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }


// //ft_strncmp
// int	ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	unsigned int i = 0;
// 	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }


// //ft_strcat
// char *ft_strcat(char *dest, char *src)
// {
// 	int i;
// 	int j;
//
// 	i = 0;
//	j = 0;
// 	while (dest[i])
// 		i++;
// 	while (src[j])
// 	{
// 		dest[i] = src[j];
// 		j++;
// 		j++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// int	main(int ac, char **av)
// {

// }


// //ft_strncat
// char *ft_strncat(char *dest, char *src, unsigned int nb)
// {
// 	unsigned int i = 0;
// 	unsigned int j = 0;

// 	while (dest[i])
// 		i++;
// 	while (j < nb - 1 && src[j])
// 	{
// 		dest[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dest[j] = '\0';
// 	return(dest);
// }



// //ft_strstr
// char	*ft_strstr(char *str, char *to_find)
// {
// 	int i;
// 	int j;

// 	if (to_find[0] == '\0')
// 		return(str);
// 	i = 0;
// 	while (str[i])
// 	{
// 		j = 0;
// 		while (str[i + j] == to_find[j] && to_find[j])
// 			j++;
// 		if (to_find[j] == '\0')
// 			return (&str[i]);
// 		i++;
// 	}
// 	return (0);
// }



// //ft_putnbr
// void	ft_putnbr(int nb)
// {
// 	char c;

// 	if (nb == "-2147483648")
// 	{
// 		write (1, "-2147483648", 1);
// 		return;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, '-', 1);
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 		ft_putnbr(nb / 10);
// 	c = (nb % 10) + '0';
// 	write (1, &c, 1);
// }


// //atoi
// int	ft_atoi(char *str)
// {
// 	int i;
// 	int sign;
// 	int result;

// 	i = 0;
// 	sign = 1;
// 	result = 0;

// 	while (str[i] == ' ' || str[i] == 9 && str[i] == 13)
// 		i++;
// 	while (str[i] == '-' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 		{
// 			write(1, '-', 1);
// 			sign = -1;
// 		}
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return (result * sign);
// }


// //power of two
// int	    is_power_of_2(unsigned int n)
// {
// 	unsigned int i = 1;
// 	while (i < n)
// 	{
// 		if (i * i == n)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// int main()
// {
// 	unsigned int n = 81;
// 	printf("%d\n", is_power_of_2(n));
// }



// //ft_iterative_factorial
// int	ft_iterative_factorial(int nb)
// {
// 	int result = 1;

// 	if (nb <= 0)
// 		return (0);
// 	while (nb > 0)
// 	{
// 		result = result * nb;
// 		nb--;
// 	}
// 	return (result);
// }

// int	main()
// {
// 	int i = 4;
// 	printf("%d\n", ft_iterative_factorial(i));
// 	return (0);
// }


// ft_recursive_factorial
int	ft_recursive_factorial(int nb)
{
	int result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);

}

int	main()
{
	int i = 5;
	printf("%d\n", ft_recursive_factorial(i));
	return (0);
}
