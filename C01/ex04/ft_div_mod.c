void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	int div = 0;
	int mod = 0;

	#include <stdio.h>
	ft_div_mod((int) argv[1][0], (int) argv[2][0], &div, &mod);

	printf("a div é = %d\n", div);
	printf("o mod é = %d\n", mod);
}*/
