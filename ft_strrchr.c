/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavarmaz <bavarmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:56:18 by bv10              #+#    #+#             */
/*   Updated: 2024/11/18 16:03:23 by bavarmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		a;

	i = 0;
	a = -1;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			a = i;
		i++;
	}
	if (a > -1)
		return ((char *) s + a);
	if ((unsigned char)c == 0)
		return ((char *) s + i);
	return (NULL);
}
