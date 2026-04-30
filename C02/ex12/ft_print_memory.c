#include <unistd.h>

void	write_mem_hex(unsigned long mem_addr, char *base)
{
	int	j;
	char	addr_hex[16];
	
	j = 15;
	while(j >= 0)
	{
		addr_hex[j] = base[mem_addr & 15];
		mem_addr >>= 4;
		j--;	
	}
	write(1, addr_hex, 16);
	write(1, ": ", 2);
}

void	write_phrase_hex(unsigned char *start, char *base, unsigned int charleft)
{
	unsigned int	j;

	j = 0;
	while(j < 16)
	{
		if (j >= charleft)
			write(1, "  ", 1);
		else
		{
			write(1, &base[start[j] >> 4], 1);
			write(1, &base[start[j] % 16], 1);
		}
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}
void	write_phrase_text(unsigned char *start, int charleft)
{
	int	j;

	j = 0;
	while(j < 16)
	{
		if (start[j] >= 32 && start[j] <= 126)
			write(1, &start[j], 1);
		else
			write(1, ".", 1);
		j++;
	}
	write(1, "\n", 1);
}

unsigned int	get_space_to_fill(unsigned int charleft)
{
	if (charleft < 16)
		return (charleft);
	return (16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*str;
	unsigned int	i;
	char		*base;
	int		charleft;
       
	base = "0123456789abcdef";
	i = 0;
	charleft = 0;
	str = (unsigned char *) addr;
	while(i < size)
	{
		charleft = get_space_to_fill(size - i);
		write_mem_hex((unsigned long) str, base);
		write_phrase_hex(str, base, charleft);
		write_phrase_text(str, charleft);
		i += charleft;
		str += charleft;
	}
	return (addr);
}
/*int	main(void)
{
	char str[] = "Hello\tWorld\n\x01\x02";
	ft_print_memory(str, 13);
}*/
