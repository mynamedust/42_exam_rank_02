#include <unistd.h> // For write
#include <stddef.h> // For NULL || (void *)0 || 0

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	max;

	i = 0;
	max = 0;
	if (!tab)
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}