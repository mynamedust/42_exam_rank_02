#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (--i >= 0)
		ft_putchar(str[i]);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	ft_putchar('\n');
	return (0);
}