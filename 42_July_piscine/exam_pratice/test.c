#include <stdio.h>
#include <unistd.h>

// char ft_rev_print(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i] != '\0')
//         i++;

//     while (i > 0)
//     {
//         write(1, &str[i - 1], 1);
//         i--;
//     }
//     return (0);
// }

// int main(void)
// {
//     char *str;
//     str = "Hello";
//     ft_rev_print(str);
//     write(1, &str, 1);
//     return (0);
// }

// char ft_strcmp(char *s1, char *s2)
// {
//     int i;

//     i = 0;
//     while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
//         i++;
//         return(s1[i] - s2[i]);
// }

// int main(int argc, char **argv)
// {
//     printf("%d\n", ft_strcmp(argv[1], argv[2]));
//     return (0);
// }

// void    ft_putstr(char *str)
// {
//     int i = 0;

//     while (str[i] != '\0')
//     {
//         write(1, &str[i], 1);
//         i++;
//     }
// }

// int main(void)
// {
//     char *test;
//     test = "Hello";
//     ft_putstr(test);
//     return (0);
// }

