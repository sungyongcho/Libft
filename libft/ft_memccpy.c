/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 14:09:14 by sucho             #+#    #+#             */
/*   Updated: 2022/08/23 01:29:30 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*ptr_d;
	unsigned const char	*ptr_s;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr_d = dst;
	ptr_s = src;
	while (n--)
	{
		*ptr_d = *ptr_s;
		if (*ptr_d == (unsigned char)c)
			return (++ptr_d);
		ptr_d++;
		ptr_s++;
	}
	return (NULL);
}
