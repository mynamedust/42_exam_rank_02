#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	rotone(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (*str + 1 > 'z')
				ft_putchar(*str - 25);
			else
				ft_putchar(*str + 1);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if (*str + 1 > 'Z')
				ft_putchar(*str - 25);
			else
				ft_putchar(*str + 1);
		}
		else
			ft_putchar(*str);
		str++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}