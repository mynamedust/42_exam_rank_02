#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	snake_to_camel(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{
			i++;
			ft_putchar(str[i] - 32);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	ft_putchar('\n');
	return (0);
}