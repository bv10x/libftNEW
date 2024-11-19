/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavarmaz <bavarmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:59:53 by bv10              #+#    #+#             */
/*   Updated: 2024/11/18 15:58:43 by bavarmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	size_t				j;
	size_t				c;
	const unsigned char	*src1;
	unsigned char		*dst1;

	if (!dst && !src)
		return (NULL);
	i = 0;
	j = 1;
	c = 0;
	src1 = src;
	dst1 = dst;
	if (dst > src)
	{
		j = -1;
		i = len - 1;
	}
	while (c < len)
	{
		dst1[i] = src1[i];
		i += j;
		c++;
	}
	return (dst);
}
