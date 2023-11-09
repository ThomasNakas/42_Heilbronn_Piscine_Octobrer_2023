/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:49:52 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/01 17:23:06 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	temp = 1;
	i = nb + 1;
	if (nb < 0)
		return (0);
	while (--i > 0)
		temp *= i;
	return (temp);
}
