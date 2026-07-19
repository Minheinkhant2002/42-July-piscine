#include <stdio.h>
#include <unistd.h>

char    ulstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            write(1, &str[i], 1);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
            write(1, &str[i], 1);
        }
        else
            return 0;     
        i++;
    }
    return (*str);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    else
        printf("%c\n", ulstr(argv[1]));
}