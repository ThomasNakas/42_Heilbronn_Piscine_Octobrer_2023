/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:00:09 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/02 11:12:28 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (*(str + i))
	{
		j = 0;
		while (*(str + i + j) == *(to_find + j) && *(to_find + j))
			j++;
		if (!*(to_find + j))
			return (str + i);
		else
			i = i + j + 1;
	}
	return (0);
}
