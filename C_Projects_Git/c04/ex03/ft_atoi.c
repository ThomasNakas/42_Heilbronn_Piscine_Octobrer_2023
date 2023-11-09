/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:50:52 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/01 22:00:43 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	p_or_m(char c);
int	is_s(char c);

int	ft_atoi(char *str)
{
	int		atoi;
	int		neg;
	int		i;

	atoi = 0;
	neg = 0;
	i = 0;
	while (is_s(*(str + i)))
		i++;
	while (p_or_m(*(str + i)))
	{
		if (*(str + i) == '-')
			neg++;
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		atoi = atoi * 10 + (*(str + i) - '0');
		i++;
	}
	if ((neg % 2) != 0)
		return (atoi * (-1));
	return (atoi);
}

int	p_or_m(char c)
{
	return ((c == '-' || c == '+') * 1);
}

int	is_s(char c)
{
	return ((((c >= 9) && (c <= 13)) || c == ' ') * 1);
}
