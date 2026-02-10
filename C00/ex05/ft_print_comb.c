
#include <unistd.h>

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;
	char *arr;
	
	i = 0;
	j = 0;
	k = 0;
	arr = "0123456789";

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				write(1, &arr[i], 1);
				write(1, &arr[j], 1);
				write(1, &arr[k], 1);
				if ((k + j + i) != 24) 
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
}
