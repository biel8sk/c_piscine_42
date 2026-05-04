char	*ft_strcat(char *dest, char *src)
{
	int	y;
	int	i;

	i = 0;
	y = 0;
	while(dest[i])
		i++;
	while(src[i])
	{
		dest[i] = src[y];
		i++;
		y++;

	}
	return (dest);
}

/*#include <unistd.h>
int	main(void)
{
	char a[11] = "hello      ";
	char b[5]= "world";

	ft_strcat(a, b);
	write(1, a, 11);
}*/
