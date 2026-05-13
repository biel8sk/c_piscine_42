/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:42:11 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/01 14:22:00 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char **argv)
{
	int		i;
	char	*p;

	i = 0;
	if (argc < 2)
		return (0);
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
