/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:38:09 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/01 15:11:14 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_params(int argc, char **argv)
{
	int		i;
	char	*p;

	i = 0;
	if (argc < 2)
		return ;
	while (argc)
	{
		if (i > 0)
		{
			p = argv[i];
			while (*p != '\0')
			{
				write(1, p, 1);
				p++;
			}
			write(1, "\n", 1);
		}
		i++;
		argc--;
	}
}

int	main(int argc, char **argv)
{
	int	need_swap;
	int	i;
	int	j;

	need_swap = 1;
	i = 0;
	j = 1;
	while (i < argc -1)
	{
		need_swap = argv[i][0] > argv[j][0];
		if (need_swap)
		{
			ft_swap(&argv[i], &argv[j]);
			need_swap = 0;
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
	print_params(argc, argv);
}
