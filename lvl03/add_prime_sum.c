#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

int	ft_atoi(char *num)
{
	long int	res;

	res = 0;
	if (*num == '-')
		return (-1);
	while (*num)
	{
		res *= 10;
		res += *num - '0';
		num++;
	}
	return	(res);
}

int	ft_isprime(int	num)
{
	int	i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (num);
}

void	ft_putnbr(int num)
{
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
	return ;
}

void	add_prime_sum(char *value)
{
	int	num;
	int	res;
	int	i;

	res = 0;
	i = 2;
	num = ft_atoi(value);
	if (num < 0)
	{
		ft_putchar('0');
		return ;
	}
	while (i <= num)
	{
		if (ft_isprime(i))
			res += i;
		i++;
	}
	ft_putnbr(res);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(argv[1]);
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}