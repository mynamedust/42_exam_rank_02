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

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchar(s2, *s1))
			return (s1);
		s1++;
	}
	return (NULL);
}