#include<unistd.h>
#include<stdlib.h>

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
		ft_putchar(num + '0');
}

void	pgcd(char *s1, char *s2)
{
	int	num1;
	int	num2;
	int	i;

	num1 = atoi(s1);
	num2 = atoi(s2);
	i = num1;
	if (num2 < num1)
		i = num2;
	while (i >= 0)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			ft_putnbr(i);
			return ;
		}
		i--;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(argv[1],argv[2]);
	ft_putchar('\n');
	return (0);
}