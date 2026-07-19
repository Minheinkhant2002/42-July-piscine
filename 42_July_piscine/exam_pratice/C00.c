#include <unistd.h>

void    putstr(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
    {
        write(1, &c[i], 1);
            i++;
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);
    else
    {
        putstr(argv[argc - 1]);
        write(1, "\n", 1);
    }
    return (0);
}