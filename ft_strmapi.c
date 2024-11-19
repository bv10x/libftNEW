/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavarmaz <bavarmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:03:27 by bv10              #+#    #+#             */
/*   Updated: 2024/11/18 12:01:21 by bavarmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*d;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	d = malloc(len * sizeof(char) + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (i < len)
	{
		d[i] = (*f)(i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
