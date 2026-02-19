void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	
	temp = 0;
	i = 0;
	j = size - 1;

	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}


/*int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	int p[5];
	#include <stdio.h>

	for(int i = 0; i < 5; i++)
		p[i] = i;
	ft_rev_int_tab(p, 5);
	for (int j = 0; j < 5; j ++)
		printf("%d\n", p[j]);
}*/
