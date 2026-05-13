/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 21:13:33 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/05 09:08:53 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
/*
int	main(void)
{
	char str[] = "string";
	ft_putstr(str);
}*/

void	ft_putstr(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		write(1, &str[p], 1);
		p++;
	}
}
