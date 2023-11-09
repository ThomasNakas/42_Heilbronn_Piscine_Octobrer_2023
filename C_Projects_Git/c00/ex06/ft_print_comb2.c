/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:41:00 by tnakas            #+#    #+#             */
/*   Updated: 2023/10/23 18:11:17 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_arr_char(char digits[4])
{
	write(1, &digits[0], 1);
	write(1, &digits[1], 1);
	write(1, " ", 1);
	write(1, &digits[2], 1);
	write(1, &digits[3], 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	digits[4];

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			digits[0] = i / 10 + '0';
			digits[1] = i % 10 + '0';
			digits[2] = j / 10 + '0';
			digits[3] = j % 10 + '0';
			ft_arr_char(digits);
			if (i != 98)
				write(1, ", ", 2);
		}
	}
}
