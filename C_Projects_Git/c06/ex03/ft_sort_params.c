/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:43:28 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/09 23:29:23 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_str_array(char *str[], int num_str);

int	main(int argc, char *argv[])
{
	int		i;

	ft_sort_str_array(argv, argc);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

void	ft_sort_str_array(char *str[], int num_str)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < num_str)
	{
		j = i;
		while (++j < num_str)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}
