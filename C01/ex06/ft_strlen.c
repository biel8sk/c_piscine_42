int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str++) count++;
	return (count);
}


/*int	main(int argc, char **argv)
{
	(void)argc;

	#include <stdio.h>
	while (*argv)
	{
		printf("tamanho da string do arg: %d\n", ft_strlen(*argv));
		argv++;
	}
}*/
