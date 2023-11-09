/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:22:29 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/02 02:37:19 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char	ft_is_low(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

char	ft_is_cap(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	i;

	new_word = 1;
	i = 0;
	while (*(str + i))
	{
		if (ft_is_alpha(*(str + i)) || (*(str + i) >= '0' && *(str + i) <= '9'))
		{
			if (new_word == 1)
			{
				*(str + i) = ft_is_low(*(str + i));
				new_word = 0;
			}
			else
				*(str + i) = ft_is_cap(*(str + i));
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
