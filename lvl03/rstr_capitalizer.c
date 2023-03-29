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
	return ;
}

void	rstr_capitalizer(char *str)
{
	int	i;
	int	idx;

	i = 1;
	idx = 0;
	while (str[idx])
		idx++;
	idx--;
	while(idx >= 0)
	{
		while (idx >= 0 && (str[idx] == ' ' || (str[idx] >= '\t' && str[idx] <= '\r')))
			idx--;
		i = 1;
		while (idx >= 0 && (!(str[idx] == ' ' || (str[idx] >= '\t' && str[idx] <= '\r'))))
		{
			if (i && str[idx] >= 'a' && str[idx] <= 'z')
			{
				str[idx] -= 32;
			}
			else if (!i && str[idx] >= 'A' && str[idx] <= 'Z')
				str[idx] += 32;
			i = 0;
			idx--;
		}
	}
	ft_putstr(str);
	return ;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}