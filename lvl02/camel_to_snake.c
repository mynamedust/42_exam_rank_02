#include<unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	camel_to_snake(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar('_');
			str[i] += 32;
		}
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	ft_putchar('\n');
	return (0);
}