#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned int	c;
	int	i;

	i = 7;
	while (i >= 0)
	{
		c = (((octet >> i) & 1) + '0');
		write (1, &c, 1);
		i--;
	}
	return ;
}

// int	main(void)
// {
// 	print_bits(0);
// 	print_bits(1);
// 	print_bits(2);
// 	print_bits(3);
// 	print_bits(42);
// 	print_bits(69);
// 	return (0);
// }