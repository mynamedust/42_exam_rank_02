#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;

	while (*str)
	{
		i = 0;
		if (*str >= 'a' && *str <= 'z')
		{
			while (i++ < *str - 96)
				ft_putchar(*str);
		}
		if (*str >= 'A' && *str <= 'Z')
		{
			while (i++ < *str - 64)
				ft_putchar(*str);
		}
		str++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}