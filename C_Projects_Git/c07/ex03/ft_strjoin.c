/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:59:31 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/05 18:03:38 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_len(char *str);
char	*ft_create_str(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ft_create_str(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			str[k++] = strs[i][j];
		j = -1;
		while (sep[++j] && i < size - 1)
			str[k++] = sep[j];
	}
	str[k] = '\0';
	return (str);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	i = -1;
	len = 0;
	if (size <= 0)
		len = 1;
	while (++i < size)
		len += ft_str_len(strs[i]);
	len += (ft_str_len(sep) * (size - 1));
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}
