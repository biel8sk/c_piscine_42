/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:29:53 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/02 18:41:16 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

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

char	*ft_strcat(char *dest, char *src)
{
	int				i;
	unsigned int	len_d;

	i = 0;
	len_d = ft_strlen(dest);
	while (src[i])
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (dest);
}

int	get_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	mount;

	i = 0;
	mount = 0;
	while (i < size)
	{
		mount += ft_strlen(strs[i]);
		if (i < size -1)
			mount += ft_strlen(sep);
		i++;
	}
	return (mount);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*str_joined;

	i = 0;
	total_len = 0;
	if (size == 0)
	{
		str_joined = malloc(1);
		str_joined[0] = '\0';
		return (str_joined);
	}		
	total_len = get_total_size(size, strs, sep);
	str_joined = (char *)malloc((sizeof(char) * total_len) + 1);
	str_joined[0] = '\0';
	while (i < size)
	{
		ft_strcat(str_joined, strs[i]);
		if (i < size -1)
			ft_strcat(str_joined, sep);
		i++;
	}
	str_joined[total_len] = '\0';
	return (str_joined);
}
// int	main(void)
// {
// 	char	*str[1];
//	
// 	str[0] = "Hello";
// 	//str[1] = "World";
// 	//str[2] = "!";
// 	char sep[6] = ", ";
//	
// 	printf("%s", ft_strjoin(1, str, sep));
// }
