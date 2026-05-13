/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:29:53 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/02 15:56:40 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(int *str)
{
	int	count;

	count = 0;
	while (*str++)
	{
		count++;
	}
	return (count);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;	

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	int	*range;
// 	int	i;
//	
// 	i = 0;
// 	printf("%d\n", ft_ultimate_range(&range, 4, 9));
// 	while (i < 5)
// 	{
// 		printf("%d,", range[i]);
// 		i++;
// 	}
// }
