#include <unistd.h>

void	write_in_hex(unsigned char c)
{
	char hex_lib[] = "0123456789abcdef";

	write(1, &hex_lib[c/16], 1);
	write(1, &hex_lib[c%16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write_in_hex((unsigned char) str[i]);
			i++;
			continue;
		}
		write(1, &str[i], 1);
		i++;
	}
}
