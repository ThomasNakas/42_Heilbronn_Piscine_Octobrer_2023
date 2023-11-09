/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:07:38 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/09 02:28:22 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *str);
char	*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ar;
	int			i;

	i = -1;
	ar = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1)); 
	if (!ar)
		return (NULL);
	while (++i < ac)
	{
		ar[i].str = av[i];
		ar[i].copy = ft_strdup(av[i]);
		ar[i].size = ft_strlen(av[i]);
	}
	ar[i].str = 0;
	return (ar);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		src_len;

	i = -1;
	src_len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (src_len + 1));
	if (!dest)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
