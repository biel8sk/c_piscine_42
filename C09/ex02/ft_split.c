/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:48:20 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/05 20:26:48 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	*arr;
	int		count_char;
	int		j;

	i = 0;
	j = 0;
	count_char = 1;
	while (str[i] != '\0')
	{
		count_char++;
		while (str[j] == charset[j] && charset[j] != 0)
		{
			count_char++;
			j++;
		}
		if (charset[j] == 0)
			 
	}
}
