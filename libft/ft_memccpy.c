/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 14:09:14 by sucho             #+#    #+#             */
/*   Updated: 2020/03/01 17:18:01 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*ptr_d;
	const char	*ptr_s;

	ptr_d = dst;
	ptr_s = src;
	while (n--)
	{
		if((*ptr_d++ = *ptr_s++)== (unsigned char)c)
			return (ptr_d);
	}

	return (NULL);
}