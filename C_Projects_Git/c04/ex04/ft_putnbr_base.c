/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:50:54 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/02 00:12:53 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_l_rec(long lbr, char *b, int b_l);
int		ft_valid(char *base);
void	ft_p_rec(int nbr, char *b, int b_l);

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	if (!ft_valid(base))
		return ;
	i = 0;
	while (base[i])
		i++;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	ft_p_rec(nbr, base, i);
}

void	ft_l_rec(long lbr, char *b, int b_l)
{
	char	d;

	if (lbr < 0)
	{
		write(1, "-", 1);
		lbr = -lbr;
	}
	if (lbr >= b_l)
		ft_l_rec(lbr / b_l, b, b_l);
	d = b[lbr % b_l];
	write(1, &d, 1);
}

int	ft_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == '+' || *(base + i) == '-' || *(base + i) <= ' ')
			return (0);
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

void	ft_p_rec(int nbr, char *b, int b_l)
{
	char	d;
	long	l_nbr;

	if (nbr == -2147483648)
	{
		l_nbr = -2147483648;
		ft_l_rec(l_nbr, b, b_l);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= b_l)
		ft_p_rec(nbr / b_l, b, b_l);
	d = b[nbr % b_l];
	write(1, &d, 1);
}
