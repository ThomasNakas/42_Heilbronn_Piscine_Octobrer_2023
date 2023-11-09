/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:59:22 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/05 18:03:58 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*r;

	if (max <= min)
		return (0);
	r = (int *)malloc(sizeof(int) * (max - min));
	i = -1;
	while (++i < max - min)
		r[i] = i + min;
	r[i] = '\0';
	return (r);
}
