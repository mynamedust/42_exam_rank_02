#include <stdio.h>
#include <stdlib.h>

int	primecheck(int	num)
{
	int	i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int num)
{
	int	i;

	if (num == 1)
	{
		printf("1");
		return ;
	}
	i = 2;
	while (i <= num)
	{
		if (num % i == 0 && primecheck(i))
		{
			printf("%d", i);
			if (i != num)
				printf("*");
			num /= i;
			i--;
		}
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}