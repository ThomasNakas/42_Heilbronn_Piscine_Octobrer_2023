/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:54:08 by tnakas            #+#    #+#             */
/*   Updated: 2023/10/28 20:07:09 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}
