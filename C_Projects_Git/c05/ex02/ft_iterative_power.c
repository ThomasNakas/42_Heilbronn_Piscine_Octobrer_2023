/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:51:21 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/01 17:23:09 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	temp = 1;
	i = -1;
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	else if (power < 0)
	{
		power = (-1) * power;
		while (++i < power)
			temp /= nb;
		return (temp);
	}
	else
	{
		while (++i < power)
			temp *= nb;
		return (temp);
	}
}
