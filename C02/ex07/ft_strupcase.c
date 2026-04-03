char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	if (!*str)
		return (str);
	while (*str)
	{
		if(*str >= 97 && *str < 123)
			*str -= 32;
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
	printf("A string em uppercase é: %s", ft_strupcase(argv[1])); 
}*/
