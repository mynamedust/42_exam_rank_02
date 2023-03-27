#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar('0' + num);
}

int	main(int argc, char **argv)
{
	ft_putnbr(argc - 1);
	argv = NULL;
	ft_putchar('\n');
	return (0);
}