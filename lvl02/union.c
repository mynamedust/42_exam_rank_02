#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchar(char *str, int c, int n)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&(str[i]));
		i++;
	}
	return (NULL);
}

void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_strchar(s1, s1[i], i))
			ft_putchar(s1[i]);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!ft_strchar(s2, s2[i], i))
		{
			if (!ft_strchar(s1, s2[i], ft_strlen(s1)))
				ft_putchar(s2[i]);
		}
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}