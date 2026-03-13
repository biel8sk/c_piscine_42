int	ft_str_is_lowercase(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	#include <stdio.h>
	printf("is argument lower ? %s", ft_str_is_lowercase(argv[1]) ? "true" : "false");
}*/
