#include<unistd.h>
#include<stdlib.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
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

void	ft_putnbr(long int num)
{
	if (num >= 16)
		ft_putnbr(num / 16);
	if (num % 16 > 9)
	{
		ft_putchar(num % 16 + 87);
	}
	else
		ft_putchar(num % 16 + '0');
}

void	print_hex(char *str)
{
	ft_putnbr(atoi(str));
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(argv[1]);
	ft_putchar('\n');
	return (0);
}