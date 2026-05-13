/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:38:11 by gpires-c          #+#    #+#             */
/*   Updated: 2026/01/31 20:54:56 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	odd;
	int	count;

	count = 0;
	odd = 1;
	while (nb > 0)
	{
		nb -= odd;
		count++;
		odd += 2;
	}
	if (nb != 0)
		return (0);
	return (count);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i +2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_is_prime(97));
// }
