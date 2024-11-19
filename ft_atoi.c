/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavarmaz <bavarmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:03:22 by bv10              #+#    #+#             */
/*   Updated: 2024/11/18 15:21:57 by bavarmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sgn;
	int	rtn;

	i = 0;
	sgn = 1;
	rtn = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		rtn = rtn * 10 + (str[i] - 48);
		i++;
	}
	return (rtn * sgn);
}
