// #include<stdio.h>
// #include<limits.h>

char	*ft_basecheck(int c, int n)
{
	int		i;
	char	*lower = "0123456789abcdef";
	char	*upper = "0123456789ABCDEF";

	i = 0;
	while (lower[i] && i < n)
	{
		if (lower[i] == c || upper[i] == c)
			return (&(lower[i]));
		i++;
	}
	return ((void *)0);
}

long int	ft_power(int n, int base)
{
	int	res;

	res = 1;
	while (n-- > 0)
		res *= base;
	return (res);
}

long int	ft_sum(int res, int c, int i, int base)
{
	if (c >= 'a' && c <= 'f')
		res += (c - 87) * ft_power(i, base);
	else if (c >= 'A' && c <= 'F')
		res += (c - 55) * ft_power(i, base);
	else
		res += (c - '0') * ft_power(i, base);
	return (res);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int			i;
	int			sign;
	long int	res;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] && (*str == ' ' || (*str >= '\n' && *str <= '\r')))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (str[i] && ft_basecheck(str[i], str_base))
		i++;
	i--;
	while (i >= 0)
	{
		res = ft_sum(res, *str, i, str_base);
		i--;
		str++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base("A", 16));
// 	printf("%d\n", ft_atoi_base("B", 16));
// 	printf("%d\n", ft_atoi_base("C", 16));
// 	printf("%d\n", ft_atoi_base("D", 16));
// 	printf("%d\n", ft_atoi_base("A", 16));
// 	printf("%d\n", ft_atoi_base("-2147483647", 10));
// 	return (0);
// }