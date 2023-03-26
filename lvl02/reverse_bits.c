unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = ((bit * 2) + (octet % 2));
		octet /= 2;
		i--;
	}
	return (bit);
}