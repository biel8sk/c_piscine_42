char	*ft_strcpy(char *dest, char *src)
{
	char	*start = dest;
	while ((*dest++ = *src++))
		;
	return (start);
}

/*int	main()
{
	//(void) argc;
	char out[5];
	ft_strcpy(out, "hello");
	#include <stdio.h>
	printf("%s\n", out);
	
}*/
