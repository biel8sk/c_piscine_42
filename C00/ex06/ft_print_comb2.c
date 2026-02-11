
#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	x;

	i = 00;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			k = (i / 10) + 48;
			x = (i % 10) + 48;
			write(1, &k, 1);
			write(1, &x, 1);
			write(1, " ", 1);
			k = (j / 10) + 48;
			x = (j % 10) + 48;
			write(1, &k, 1);
			write(1, &x, 1);
			if (i + j != 197)
				write(1, ", ", 2);
			j++;	
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
