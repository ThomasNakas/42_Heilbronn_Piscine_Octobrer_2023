/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 02:43:12 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/09 23:32:47 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		w_i_s(char *str, char *sep);
void	ft_strdup(char **str, char ***ans, int *len, int *i, int *k, int *m);
void	ft_strdup_pos(char **str, char ***ans,
			char **charset, int *i, int *k, int *m);
int		ft_strlen(char *str);

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		m;
	char	**ans;
	int		len;

	i = 0;
	ans = (char **)malloc(1024);
	k = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		if (w_i_s(str + i, charset) > 0)
			ft_strdup_pos(&str, &ans, &charset, &i, &k, &m);
		else
		{
			ft_strdup(&str, &ans, &len, &i, &k, &m);
			break ;
		}
		i += m + ft_strlen(charset);
		k++;
	}
	return (ans);
}

int	w_i_s(char *str, char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (*(str + i))
	{
		j = 0;
		while (*(str + i + j) == *(sep + j))
			j++;
		if (sep[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

void ft_strdup(char **str, char ***ans, int *len, int *i, int *k, int *m)
{
	(*ans)[*k] = (char *)malloc((*len - *i) + 1);//ans[k] = len - i
	if (!(*str)[*i] || !(*ans)[*k])
		return ;
	*m = -1;
	while (++(*m) < *len - *i)
		(*ans)[*k][*m] = (*str)[*i + *m];
	(*ans)[*k][*m] = '\0';
}

void	ft_strdup_pos(char **str, char ***ans,
					char **charset, int *i, int *k, int *m)
{
	(*ans)[*k] = (char *)malloc((w_i_s((*str) + *i, *charset)) + 1);
	if (!(*str)[*i] || !(*ans)[*k])
		return ;
	*m = -1;
	while (++(*m) < w_i_s((*str) + *i, *charset))
		(*ans)[*k][*m] = (*str)[*i + *m];
	(*ans)[*k][*m] = '\0';
}

