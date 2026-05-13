/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 00:23:20 by gpires-c          #+#    #+#             */
/*   Updated: 2026/01/30 17:53:01 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str++)
	{
		write(1, (str -1), 1);
	}
}

// int	main(void)
// {
// 	ft_putstr("abobrinha abobrinha pao com mortadela");
// }
