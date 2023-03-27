#include<stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*range;
	int	i;

	i = start - end;
	if (i < 0)
		i *= -1;
	range = malloc(sizeof(int) * i + 1);
	i = 0;
	if (!range)
		return (0);
	while (end != start)
	{
		range[i] = end;
		i++;
		if (end > start)
			end--;
		else if (end < start)
			end++;
	}
	range[i] = start;
	return (range);
}

int	ft_absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

#include <stdio.h>
int	main(void)
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;
	idx = 0;
	start = 0;
	end = 0;
	tab = ft_rrange(start, end);
	size = ft_absolute_value(end - start) + 1;
	while (idx < size)
	{
		printf(" [%i] ", tab[idx]);
		idx++;
	}
	printf("\n");
}