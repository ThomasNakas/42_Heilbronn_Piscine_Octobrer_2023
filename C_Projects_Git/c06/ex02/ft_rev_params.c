/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:26:52 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/02 21:39:56 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc;
	while (--i > 0)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			ft_putchar(argv[i][j]);
		ft_putchar('\n');
	}
}
