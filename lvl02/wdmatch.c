#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	return ;
}

char	*ft_strchar(char *str, int c)
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

void	wdmatch(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!(s2 = ft_strchar(s2, s1[i])))
			return ;
		s2++;
		i++;
	}
	ft_putstr(s1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	ft_putstr("\n");
	return (0);
}