#include<stdlib.h>

int     *ft_range(int start, int end)
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
	while (start != end)
	{
		range[i] = start;
		i++;
		if (start > end)
			start--;
		else if (start < end)
			start++;
	}
	range[i] = end;
	return (range);
}

// int	ft_absolute_value(int nbr)
// {
// 	if (nbr < 0)
// 		return (-nbr);
// 	return (nbr);
// }

// #include <stdio.h>
// int	main(void)
// {
// 	int	*tab;
// 	int	idx;
// 	int	start;
// 	int	end;
// 	int	size;
// 	idx = 0;
// 	start = 0;
// 	end = -3;
// 	tab = ft_range(start, end);
// 	size = ft_absolute_value(end - start) + 1;
// 	while (idx < size)
// 	{
// 		printf(" [%i] ", tab[idx]);
// 		idx++;
// 	}
// 	printf("\n");
// }