char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	main(void)
{
	#include <stdio.h>
	char dest[8];
	char *src;

	src = "eu sou um recurso";
	ft_strncpy(dest, src, 6);
	printf("%s\n", dest);
}
