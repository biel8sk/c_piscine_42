// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(int argc, char **argv)
{
	(void) argc;
	int a = (int) (argv[1][0] - 48);
	int b = (int) (argv[2][0] - 48);

	printf("before: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("after: a = %d, b = %d\n", a, b);

}*/
