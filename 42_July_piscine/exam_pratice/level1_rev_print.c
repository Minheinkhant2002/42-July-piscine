#include <unistd.h>

char    rev_print(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    
    while (i > 0)
    {
        write(1, &str[i - 1], 1);
        i--;
    }
    return(0);
}

int main(void)
{
    char *c;

    c = "12345";
    rev_print(c);
    write(1, &c, 1);
    return(0);
}