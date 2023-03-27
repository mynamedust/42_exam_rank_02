#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= '\n' && str[i] <= '\r'))
			i++;
	while (str[i])
	{
		while (str[i] && !(str[i] == ' ' || (str[i] >= '\n' && str[i] <= '\r')))
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i])
			ft_putstr("   ");
		while (str[i] == ' ' || (str[i] >= '\n' && str[i] <= '\r'))
			i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}