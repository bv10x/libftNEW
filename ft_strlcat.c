/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavarmaz <bavarmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:46:11 by bv10              #+#    #+#             */
/*   Updated: 2024/11/18 15:53:57 by bavarmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	i;

	a = ft_strlen(dst);
	b = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (b);
	if (dstsize <= a)
		return (b + dstsize);
	while (src[i] && a + i < dstsize - 1)
	{
		dst[a + i] = src[i];
		i++;
	}
	dst[a + i] = '\0';
	return (a + b);
}
