#include <unistd.h>

void	write_mem_hex(unsigned long mem_addr, char *base)
{
	int	j;
	char	addr_hex[16];
	
	j = 16;
	while(j > 0)
	{
		addr_hex[j] = base[(mem_addr >> (j * 4)) & 15];
		j--;	
	}
	write(1, addr_hex, 16);
	write(1, ": ", 2);
}

void	write_phrase_hex(unsigned char *start, char *base, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while(j < 16)
	{
		write(1, &base[start[j + i] >> 4], 1);
		write(1, &base[start[j + i] % 16], 1);
		write(1, &base[start[j + 1 + i] >> 4], 1);
		write(1, &base[start[j + 1 + i] % 16], 1);
		write(1, " ", 1);
		j += 2;
	}
}
void	write_phrase_text(unsigned char *start)
{
	int	j;

	j = 0;
	while(j < 16)
	{
		if (*start < 32 || *start > 126)
			write(1, ".", 1);
		else
			write(1, &start[j], 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*str;
	unsigned int	i;
	char		*base;
       
	base = "0123456789abcdef";
	i = 0;
	str = (unsigned char *) addr;
	while(i < size)
	{
		write_mem_hex((unsigned long) &str, base);
		write_phrase_hex((str + i), base, i);
		write_phrase_text(str);
		i += 16;
	}
	return (addr);
}
