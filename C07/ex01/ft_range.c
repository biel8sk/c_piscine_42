/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:29:53 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/02 14:18:10 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	return (ret);
}
// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*ptr;
// 	int	i;
//
// 	ptr = NULL;
// 	max = 9;
// 	min = 4;
// 	i = 0;
// 	ptr = ft_range(min, max);
// 	while (i < 5)
// 	{
// 		printf("%d,", ptr[i]);
// 		i++;
// 	}
// }
