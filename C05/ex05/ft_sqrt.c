/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:58:07 by gpires-c          #+#    #+#             */
/*   Updated: 2026/01/31 20:09:02 by gpires-c         ###   ########.fr       */
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
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_sqtr(36));
// }
