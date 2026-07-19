#include <unistd.h>

int    repeat_alpha(char c)
{
    int repeat;

    if(c >= 'a' && c <= 'z')
        repeat = c - 'a' + 1;
    else if (c >= 'A' && c <= 'Z')
        repeat = c - 'A' + 1;
    else
        repeat = 1;
    return (repeat);
}

int main(void)
{
    char str[]  = "AAbc";
    int i = 0 ;
    int j ;

    while (str[i])
    {
        j = 0;
        while (j < repeat_alpha(str[i]))
        {
            write(1, &str[i], 1);
            j++;
        }
        i++;
    }
    return (0);    
}