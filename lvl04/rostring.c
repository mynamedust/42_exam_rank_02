#include<unistd.h>

void	ft_putchar(int	c)
{
	write (1, &c, 1);
}

int	ft_spacecheck(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str && !ft_spacecheck(*str))
	{
		ft_putchar(*str);
		str++;
	}
	return ;
}

void	rostring(char *str)
{
	char 	*tmp;

	tmp = str;
	while (*str && ft_spacecheck(*str))
		str++;
	while (*str && !ft_spacecheck(*str))
		str++;
	while (*str)
	{
		while (*str && ft_spacecheck(*str))
			str++;
		ft_putstr(str);
		while (*str && !ft_spacecheck(*str))
			str++;
		if (*str && ft_spacecheck(*str))
			ft_putchar(' ');
		while (*str && ft_spacecheck(*str))
			str++;
		if (*str == '\0')
			ft_putchar(' ');
	}
	while (*tmp && ft_spacecheck(*tmp))
		tmp++;
	ft_putstr(tmp);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}