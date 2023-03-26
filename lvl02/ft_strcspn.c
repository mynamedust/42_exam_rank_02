#include<stddef.h>

const char	*ft_strchar(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i] && !ft_strchar(reject, s[i]))
		i++;
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%ld\n", ft_strcspn("tro3jan", "1234" ));
// 	return (0);
// }