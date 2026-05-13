/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 02:09:22 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/05 14:59:35 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

static void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
	}
}

void	ft_show_tab(struct s_stock_str *arr_s)
{
	while (arr_s->str != 0)
	{
		write(1, arr_s->str, arr_s->size);
		write(1, "\n", 1);
		ft_putnbr(arr_s->size);
		write(1, "\n", 1);
		write(1, arr_s->copy, arr_s->size);
		write(1, "\n", 1);
		arr_s++;
	}
}

// int	main(void)
// {
// 	char		*s1;
// 	char		*s2;
// 	char		*s3;
// 	t_stock_str	*arr_s;

// 	s1 = "oi";
// 	s2 = "tudo";
// 	s3 = "bem";

// 	char *arr[3] = {s1, s2, s3};

// 	arr_s = ft_strs_to_tab(3, arr);
// 	ft_show_tab(arr_s);
// }
