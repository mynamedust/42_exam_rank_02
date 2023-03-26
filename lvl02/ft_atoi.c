int	ft_numcount(const char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

long int	ft_power(int base, int count)
{
	long int	res;

	res = 1;
	while (count-- > 0)
		res *= base;
	return (res);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	len;
	long int res;

	i = 0;
	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	len = ft_numcount(str) - 1;
	while (*str >= '0' && *str <= '9')
	{
		res += (*str - '0') * ft_power(10, len);
		len--;
		str++;
	}
	return (res * sign);
}