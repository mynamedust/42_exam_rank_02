#include<stdlib.h>

int	ft_wordcount(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		while(*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		while(*str && !(*str == ' ' || (*str >= '\t' && *str <= '\r')))
			str++;
		i++;
	}
	return (i);
}

char	*ft_getword(char *str)
{
	char	*word;
	int		i;
	
	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && !(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	word = malloc(i + 1);
	word[i] = '\0';
	i = 0;
	while (*str && !(*str == ' ' || (*str >= '\t' && *str <= '\r')))
	{
		word[i] = *str;
		str++;
		i++;
	}
	return (word);
}

char    **ft_split(char *str)
{
	int		count;
	int		i;
	char	**arr;

	if (!str)
		return (NULL);
	i = 0;
	count = ft_wordcount(str);
	arr = malloc(sizeof(char *) * count + 1);
	if (!arr)
		return (NULL);
	while (*str)
	{
		while(*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		if (*str && !(*str == ' ' || (*str >= '\t' && *str <= '\r')))
		{
			arr[i] = ft_getword(str);
			i++;
		}
		while (*str && !(*str == ' ' || (*str >= '\t' && *str <= '\r')))
			str++;
	}
	arr[i] = NULL;
	return (arr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		idx;
// 	char	**tab;
// 	idx = 0;
// 	tab = ft_split("s  d");
// 	while (tab[idx])
// 	{
// 		printf("%s", tab[idx]);
// 		printf("\n");
// 		idx++;
// 	}
// 	return (0);
// }