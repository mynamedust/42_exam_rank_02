int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	c;

	i = -1;
	len = ft_strlen(str);
	while (++i < --len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
	}
	return (str);
}