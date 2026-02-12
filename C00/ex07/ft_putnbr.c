
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;

	nbl = (long) nb;
	
	if (nbl > 9)
	{
		ft_putnbr(nbl / 10);
		ft_putnbr(nbl % 10);
	}
	else if (nbl < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbl);
		return ;
	}
	else
	{
		nbl += 48;
		write(1, &nbl, 1);

	}
}

int main(void)
{
	ft_putnbr(1024);
	ft_putnbr(-1024);
	ft_putnbr(-239432);
	ft_putnbr(0);
}
