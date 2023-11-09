/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:00:37 by tnakas            #+#    #+#             */
/*   Updated: 2023/11/07 18:01:50 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen( char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_l;
	unsigned int	s_l;
	unsigned int	c_l;

	d_l = ft_strlen(dest);
	s_l = ft_strlen(src);
	c_l = size - d_l - 1;
	if (size <= d_l)
		return (s_l + size);
	if (c_l > s_l)
		c_l = s_l;
	if (c_l != 0)
	{
		i = 0;
		while (*(src + i) && i < c_l)
		{
			*(dest + d_l + i) = *(src + i);
			i++;
		}
		*(dest + d_l + i) = '\0';
	}
	return (d_l + s_l);
}
