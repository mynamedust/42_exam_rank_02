#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	alpha_mirror(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = ('m' - (*str - 'n'));
		if (*str >= 'A' && *str <= 'Z')
			*str = ('M' - (*str - 'N'));
		ft_putchar(*str);
		str++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	ft_putchar('\n');
	return (0);
}