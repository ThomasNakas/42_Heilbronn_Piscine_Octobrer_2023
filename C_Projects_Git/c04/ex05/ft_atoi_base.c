/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:50:58 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/02 04:29:37 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid(char *base);
int	ft_iterative_power(int nb, int power);

int	ft_atoi_base(char *str, char *base)
{
	int	it[3];
	int	atoi;

	it[0]= 0;
	it[1] = 0;
	it[2] = 0;
	if (ft_valid(base))
		return (0);
	while (base[it[1]])
		it[1]++;
	while (str[it[0]] == ' ' || (str[it[0]] >= 9 && str[it[0]] <= 13))
		it[0]++;
	while (str[it[0]] == '-' || str[it[0]] == '+')
	{
		if (str[it[0]] == '-')
			it[2]++;
		it[0]++;
	}
	while (str[it[0]] >= '0' && str[it[0]] <= '9')
	{
		atoi = atoi * it[1] + (base [(str[it[0]] - '0') % it[1]]);
		it[0]++;
	}
	return (ft_iterative_power(-1, it[2]) * atoi);
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
