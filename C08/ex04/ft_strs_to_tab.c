/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 22:22:57 by gpires-c          #+#    #+#             */
/*   Updated: 2026/02/05 14:19:01 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

struct s_stock_str	*initialize_s(struct s_stock_str *s)
{
	s->copy = 0;
	s->size = 0;
	s->str = 0;
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int size, char **strs)
{
	struct s_stock_str	*arr_st;
	int					i_arr;

	i_arr = 0;
	arr_st = malloc((sizeof(struct s_stock_str)) * size + 1);
	if (!arr_st)
		return (arr_st);
	while (i_arr < size)
	{
		arr_st[i_arr] = *initialize_s(&arr_st[i_arr]);
		arr_st[i_arr].str = strs[i_arr];
		arr_st[i_arr].size += ft_strlen(strs[i_arr]);
		arr_st[i_arr].copy = ft_strdup(strs[i_arr]);
		i_arr++;
	}
	return (arr_st);
}

// int	main(void)
// {
// 	char		*s1;
// 	char		*s2;
// 	char		*s3;
// 	t_stock_str	*arr_s;

// 	s1 = "oi";
// 	s2 = "tudo";
// 	s3 = "bem";

// 	char *arr[3] = {s1, s2, s3};

// 	arr_s = ft_strs_to_tab(3, arr);
// 	ft_show_tab(arr_s);
// }
