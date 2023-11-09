/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:52:15 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/01 17:23:10 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		if (nb == 0)
			return (1);
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	else
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
}
