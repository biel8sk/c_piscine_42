int	is_num(char c)
{
	return (c >= 48 && c <= 57);
}

int	is_upper(char c) 
{
	return (c >= 65 && c <= 90);
}

int	is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

int	is_alfa(char c)
{
	return (is_upper(c) || is_lower(c) || is_num(c));
}

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	printf("execitando o metodo");
	while (str[i] != 0)
	{
		printf("entrou no loop");
		if (i == 0 && is_lower(str[i]))
		{

			str[i] -= 32;
			i++;
			continue;
		}
		else 
		{
			/*if (is_lower(str[i]) && (!is_alfa(str[i -1])))
				str[i] -= 32;
			else if (is_upper(str[i]) && is_alfa(str[i -1]))
				str[i] += 32;*/
		}
		i++;
	}
	return (str);
}
int	main(void)
{
	char *str_test = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	#include <stdio.h>
	printf("string antes: %s", str_test);
	ft_strcapitalize(str_test);
	printf("string depois: %s", str_test);

}
