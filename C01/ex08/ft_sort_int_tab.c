void	ft_sort_int_tab(int *tab, int size)
{
		int	i;
		int	j;
		int	temp;

		i = 0;
		j = 0;
		while (i < size)
		{
			while (j < (size -1))
			{
				if (tab[j] > tab [j + 1])
				{
					temp = tab[j];
					tab[j] = tab[j + 1];
					tab[j + 1] = temp;
				}
				j++;
			}
			j = 0;
			i++;
		}
}

/*int	main(void)
{
	#include <stdio.h>
	int p[6] = {4,6,3,5,1,2};
	ft_sort_int_tab(p, 6);
	for (int i = 0; i < 6; i++)
		printf("%d\n", p[i]);
}*/
