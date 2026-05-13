/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:30:44 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/02 11:23:00 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*out;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	out = (char *)malloc(sizeof(char) * (len + 1));
	while (src[i] != '\0')
	{
		out[i] = src[i];
		i++;
	}
	out[len] = '\0';
	return (out);
}
// int	main(void)
// {
// 	//char	str_ret[5];
// 	char str2[3] = "oi";
// 	printf("%s", ft_strdup(str2));
// }
