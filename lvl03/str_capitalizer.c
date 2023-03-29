#include<unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	str_capitalizer(char *str)
{
	int	i;

	i = 1;
	while(*str)
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		{
			ft_putchar(*str);
			str++;
		}
		i = 1;
		while (*str && !(*str == ' ' || (*str >= '\t' && *str <= '\r')))
		{
			if (i && *str >= 'a' && *str <= 'z')
			{
				*str -= 32;
			}
			else if (!i && *str >= 'A' && *str <= 'Z')
				*str += 32;
			i = 0;
			ft_putchar(*str);
			str++;
		}
	}
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
			str_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}