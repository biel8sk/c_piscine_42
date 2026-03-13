int	ft_str_is_numeric(char *str)
{
	if (! *str)
		return (1);
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	#include <stdio.h>
	printf("a string eh vazia? %d", ft_str_is_numeric(argv[1]));
}*/
