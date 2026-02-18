void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}


int	main(int argc, char **argv)
{
	(void) argc;

#include <stdio.h>

	int a = *argv[1] - 48;
	int b = *argv[2] - 48;

	printf("before: %d, %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("after: %d, %d\n", a, b);	
}
