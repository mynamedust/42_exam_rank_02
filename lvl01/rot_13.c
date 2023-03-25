#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	rot_13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (*str + 13 > 'z')
				ft_putchar(*str - 13);
			else
				ft_putchar(*str + 13);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if (*str + 13 > 'Z')
				ft_putchar(*str - 13);
			else
				ft_putchar(*str + 13);
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
		rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}