/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:57:57 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/04 20:36:06 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	i = nb;
	while (!(ft_is_prime(i)))
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0);
	while (i < nb / 5)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
