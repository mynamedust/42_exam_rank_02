void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	int	tmp;

	i = 0;
	a = 1;
	while (i < size)
	{
		while (a < size)
		{
			if (tab[a] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[a];
				tab[a] = tmp;
			}
			a++;
		}
		i++;
		a = i + 1;
	}
	return ;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int				tab[10];
// 	unsigned int	size;
// 	unsigned int	i;

// 	i = 0;
// 	tab[0] = 9;
// 	tab[1] = 1;
// 	tab[2] = 7;
// 	tab[3] = 2;
// 	tab[4] = 8;
// 	tab[5] = 13;
// 	tab[6] = 2;
// 	tab[7] = 10;
// 	tab[8] = 5;
// 	tab[9] = 20;
// 	size = 10;
// 	sort_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }