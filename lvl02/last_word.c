#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	last_word(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while ((str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) && i >= 0)
		i--;
	while (!(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) && i >= 0)
		i--;
	i++;
	while (!(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}