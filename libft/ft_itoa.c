/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 00:42:17 by sucho             #+#    #+#             */
/*   Updated: 2022/08/23 23:20:45 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	long		value;
	size_t		count;
	char		*result;

	value = n;
	count = 1;
	if (value < 0)
	{
		count++;
		value *= -1;
	}
	while (value > 0)
	{
		count++;
		value /= 10;
	}
	result = (char *)malloc(sizeof(char) * (count + 1));
	if (!result)
		return (NULL);
	value = (long)n * 10;
	if (value < 0)
	{
		result[0] = '-';
		value *= -1;
	}
	result[count--] = '\0';
	if (value == 0)
		result[count] = '0';
	while (value > 0)
	{
		result[count--] = value % 10 + '0';
		value /= 10;
	}
	return (result);
}
