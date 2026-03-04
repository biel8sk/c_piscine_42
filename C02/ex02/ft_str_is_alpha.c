
int	is_alpha(char c)
{
	return (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'); 
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!is_alpha(*str))
			return (0);
		str++;
	}
	return (1);
	
}

/*int main(int argc, char **argv)
{
	#include <stdio.h>

	if (argc >= 2)
	{
		if (ft_str_is_alpha(argv[1]))
			printf("é alphabetica: %s", argv[1]);
		else
	       		printf("Não é alphabetics: %s", argv[1]);
	}
}*/
