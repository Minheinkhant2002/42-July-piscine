#include <unistd.h>
#include <stdio.h>

int atoi(char *str)
{
    int i;
    int sign;
    int result;
    int count = 1;

    i = 0;
    sign = 1;
    result = 0;

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;

    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            if (count > 1)
                break;
            sign = -1;
            count = count + 1;
        }
        else{
            if (count > 1)
                break;
            count = count + 1;

        }
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
int main(void)
{
    char i[] = "++12345ADSIV";
    printf("%d\n", atoi(i));
    return (0);
}