/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:52:01 by tnakas            #+#    #+#             */
/*   Updated: 2023/10/21 16:32:38 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	temp = tab [0];
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab [j] > tab [j + 1])
			{
				temp = tab [j];
				tab [j] = tab [j + 1];
				tab [j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
