/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavarmaz <bavarmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:08:39 by bv10              #+#    #+#             */
/*   Updated: 2024/11/18 14:36:29 by bavarmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *) s1;
	b = (char *) s2;
	while (((unsigned char) a + i || (unsigned char) b + i) && i < n)
	{
		if ((unsigned char) *(a + i) != (unsigned char) *(b + i))
			return ((unsigned char) *(a + i) - (unsigned char) *(b + i));
		i++;
	}
	return (0);
}
