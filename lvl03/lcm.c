unsigned int	hcf(unsigned int a, unsigned int b)
{
	unsigned int	i;

	i = a;
	if (b < a)
		i = b;
	while (i >= 0)
	{
		if (a % i == 0 && b % i == 0)
			return (i);
		i--;
	}
	return ((unsigned int)0);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	return (a * b / hcf(a, b));
}

// #include<stdio.h>

// int	main(void)
// {
// 	printf("%u\n", lcm(11, 22));
// }