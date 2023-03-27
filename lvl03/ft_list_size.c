typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while(begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

// #include<stdlib.h>
// #include<stdio.h>

// t_list	*ft_new_node(void *data)
// {
// 	t_list	*node;

// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (node = NULL);
// 	node->data = data;
// 	node->next = NULL;
// 	return (node);
// }

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;
// 	t_list	*fourth;
// 	t_list	*solo;

// 	first = ft_new_node("One");
// 	second = ft_new_node("Two");
// 	third = ft_new_node((void *)3);
// 	fourth = ft_new_node("Four");
// 	solo = ft_new_node("Solo");
// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	printf("%d\n", ft_list_size(first));
// 	printf("%d\n", ft_list_size(second));
// 	printf("%d\n", ft_list_size(third));
// 	printf("%d\n", ft_list_size(solo));
// 	printf("%d\n", ft_list_size(NULL));
// 	printf("%d\n", ft_list_size(fourth));
// 	return (0);
// }