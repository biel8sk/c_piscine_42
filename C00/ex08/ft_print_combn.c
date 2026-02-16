
#include <unistd.h>

int get_max(int len)
{
	int i = 1;
	while (len > 0)
	{
		i *= 10;
	}
	return (i - 1);
}


int get_power_ten(int i)
{
	int k = 1;
	int count = 1;

	while (k < i)
	{
		count ++;
		k *= 10;
	}
	return (count);
}

void	ft_print_combn(int n)
{
	int i;
	int max;
	int j;
	int temp;
	int curr_len;

	i = 0;
	max = get_max(i);
	j = 1;
	temp = 0;
	curr_len = 1;
	while (i < max)
	{
		if (i < 10)
		{
			while (j < n)
			{
				write(1, "0", 1);
				j++;
			}
			temp = i + 48;
			write(1, &temp, 1);
		}
		else
		{
			curr_len = get_power_ten(i);
			j = curr_len;
			while (j < n)
			{
				write(1, "0", 1);
				j++;
			}
			
		}
	}
}


int main(void)
{
	ft_print_combn(48);
}
