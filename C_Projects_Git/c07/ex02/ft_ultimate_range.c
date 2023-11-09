/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_ultimate_range.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:59:26 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/05 17:58:49 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (!result)
		return (-1);
	i = -1;
	while (++i < max - min)
		result[i] = i + min;
	*range = result;
	return (i);
}
