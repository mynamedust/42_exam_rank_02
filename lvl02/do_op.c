#include<stdlib.h>
#include<stdio.h>

void	do_op(char *num1, char sign, char *num2)
{
	int	result;

	if (sign == '*')
		result = atoi(num1) * atoi(num2);
	if (sign == '+')
		result = atoi(num1) + atoi(num2);
	if (sign == '-')
		result = atoi(num1) - atoi(num2);
	if (sign == '/')
		result = atoi(num1) / atoi(num2);
	printf("%d", result);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2][0], argv[3]);
	printf("\n");
	return (0);
}