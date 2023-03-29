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

void	rev_wstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		while (i >= 0 && !ft_spacecheck(str[i]))
			i--;
		ft_putstr(&(str[i + 1]));
		while (i >= 0 && ft_spacecheck(str[i]))
		{
			ft_putchar(str[i]);
			i--;
		}
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	ft_putchar('\n');
	return (0);
}