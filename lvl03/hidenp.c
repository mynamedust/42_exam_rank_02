#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

char	*ft_strchar(char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

void	hidenp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!(s2 = ft_strchar(s2, s1[i])))
		{
			ft_putchar('0');
			return ;
		}
		i++;
	}
	ft_putchar('1');
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1],argv[2]);
	ft_putchar('\n');
	return (0);
}