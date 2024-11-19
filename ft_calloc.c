/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavarmaz <bavarmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:08:18 by bavarmaz          #+#    #+#             */
/*   Updated: 2024/11/18 16:08:22 by bavarmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	char	*s;
	size_t	i;

	str = (void *) malloc (count * size);
	if (str == NULL)
		return (NULL);
	s = str;
	i = 0;
	while (i < count * size)
	{
		s[i] = 0;
		i++;
	}
	return (str);
}
