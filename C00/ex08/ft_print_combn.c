
#include <unistd.h>

void	ft_print_combn(int n)
{
	int i;
	
	0 = 1;
	while (i <= 5)
	{
		n += i; 
		write(1, &n, 1);
		n -= i;
		i = i + 1;
	}
}


int main(void)
{
	ft_print_combn(48);
}
