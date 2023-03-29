#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	return ;
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

long int	ft_atoi(char *str)
{
	long int	res;
	
	res = 0;
	while (*str)
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res);
}

void	tab_mult(char *str)
{
	long int	num;
	int	i;

	i = 1;
	num = ft_atoi(str);
	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putstr(str);
		ft_putstr(" = ");
		ft_putnbr(i * num);
		ft_putchar('\n');
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}