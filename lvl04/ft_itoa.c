#include <stdlib.h>	//For malloc
#include <stdio.h>	//For printf

char	*ft_itoa(int nbr)
{
	long int	s;
	char		*str;
	long int	n;

	n = nbr;
	s = 10;
	nbr = 1;
	while (n / s != 0)
	{
		s *= 10;
		nbr++;
	}
	s /= 10;
	if (n < 0)
		nbr++;
	str = malloc(nbr + 1);
	if (!str)
		return (NULL);
	str[nbr] = '\0';
	nbr = 0;
	if (n < 0)
	{
		n = -n;
		str[nbr++] = '-';
	}
	while (s > 0)
	{
		str[nbr++] = '0' + n / s;
		n %= s;
		s /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(1));
// 	printf("%s\n", ft_itoa(42));
// 	printf("%s\n", ft_itoa(1001));
// 	printf("%s\n", ft_itoa(-0));
// 	printf("%s\n", ft_itoa(-2));
// 	printf("%s\n", ft_itoa(-24));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(2147483648));
// }