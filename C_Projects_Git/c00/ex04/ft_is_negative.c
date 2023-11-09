/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:43:49 by tnakas            #+#    #+#             */
/*   Updated: 2023/10/30 17:13:31 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	answer;

	if (n < 0)
	{
		answer = 'N';
	}
	else
	{
		answer = 'P';
	}
	write(1, &answer, 1);
}
