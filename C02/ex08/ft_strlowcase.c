char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	if (!*str)
		return (str);
	while (*str)
	{
		if(*str >= 65 && *str < 91)
			*str += 32;
		str++;
	}
	return (start);
}
/*int	main(int argc, char **argv)
{
	#include <stdio.h>
	if (argc < 2)
	{
		printf("Insira uma string de argumento");
		return (0);
	}
	printf("A string EM LOWERCASE é: %s", ft_strlowcase(argv[1])); 
}*/
