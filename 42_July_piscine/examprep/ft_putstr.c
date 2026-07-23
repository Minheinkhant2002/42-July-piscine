#include <unistd.h>
#include <stdio.h>

int	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i]) 
		i++;
	return(i);
}

int main(int ac, char **av)
{
	int i;
	if (ac != 2)
	{
		return (0);
	}
	else
	{
		i = ft_putstr(av[1]);
	}
	printf("%d\n", i);
	return (0);
}
