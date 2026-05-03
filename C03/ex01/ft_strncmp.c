int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (s1[i-1] - s2[i-1]);
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc < 3)
		printf("insira os argumento pra testa o blg");
	printf("%d", ft_strncmp(argv[1], argv[2], 4));
}*/
