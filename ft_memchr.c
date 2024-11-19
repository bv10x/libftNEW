/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavarmaz <bavarmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:24:18 by bv10              #+#    #+#             */
/*   Updated: 2024/11/18 12:48:46 by bavarmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*(str + i) == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}
