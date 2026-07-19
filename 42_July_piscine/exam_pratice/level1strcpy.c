#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s2[i] = '\0';
    return (s1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    char s1[10];
    printf("%s\n", ft_strcpy(s1, argv[1]));
}

// {
//     char s1[10]; 
//     char s2[] = "Hello";
//     printf("%s\n",ft_strcpy(s1, s2));
//     return (0);
// }