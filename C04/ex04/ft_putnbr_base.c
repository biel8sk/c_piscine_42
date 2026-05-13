/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:04:50 by gpires-c          #+#    #+#             */
/*   Updated: 2026/01/30 20:55:42 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
	{
		count++;
	}
	return (count);
}

int	validate_base(char *base, int len)
{
	int		i;
	int		j;

	if (len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	put_nbr_recursive(long nbr, char *base, int len)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		put_nbr_recursive(nbr, base, len);
		return ;
	}
	else if (nbr >= len)
	{
		put_nbr_recursive((nbr / len), base, len);
		put_nbr_recursive((nbr % len), base, len);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nbr_l;

	len = ft_strlen(base);
	nbr_l = (long) nbr;
	if (!validate_base(base, len))
	{
		return ;
	}
	put_nbr_recursive(nbr_l, base, len);
}
// int main(void)
// {
// 	//char bin[2] = "01";
// 	//char hex[16] = "0123456789abcdef";
// 	//char oct[8] = "poneyvif";
// 	ft_putnbr_base(40, "poneyvif");
// }
