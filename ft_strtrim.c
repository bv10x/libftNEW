/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavarmaz <bavarmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:50:28 by bv10              #+#    #+#             */
/*   Updated: 2024/11/18 15:12:55 by bavarmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s, char const *set)
{
	int		len;
	int		left;
	int		right;
	char	*str;

	if (!s)
		return (NULL);
	left = 0;
	right = ft_strlen(s) - 1;
	while (s[left] && ft_strchr(set, s[left]))
		left++;
	while (right > left && ft_strchr(set, s[right]))
		right--;
	if (left > right)
		return (ft_strdup(""));
	len = right - left + 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + left, len);
	str[len] = '\0';
	return (str);
}
