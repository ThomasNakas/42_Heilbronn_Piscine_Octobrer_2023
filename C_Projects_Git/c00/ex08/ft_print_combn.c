/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:20:19 by tnakas            #+#    #+#             */
/*   Updated: 2023/10/24 03:38:18 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char( char c )
{
	write(1, &c, 1);
}

void	ft_print_comma(char i, int n)
{
	if (i != (10 - n))
	{
		ft_put_char(',');
		ft_put_char(' ');
	}
}

void	ft_print_digits(int *digits, int n)
{
	int	i;
	int	wr;

	wr = 1;
	i = 0;
	while (++i < n)
		if (digits [i - 1] >= digits [i])
			wr = 0;
	if (!wr)
		return ;
	i = -1;
	while (++i < n)
		ft_put_char(digits [i] + 48);
	ft_print_comma(digits[0], n);
}

void	ft_print_combn(int n)
{
	int	i;
	int	comb [10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		comb [i] = i;
	while (comb [0] <= (10 - n) && n >= 1)
	{
		ft_print_digits(comb, n);
		if (n == 10)
			break ;
		comb [n - 1]++;
		i = n + 1;
		while (--i && n > 1)
		{
			if (comb [i] > 9)
			{
				comb [i -1]++;
				comb [i] = 0;
			}
		}
	}
}
