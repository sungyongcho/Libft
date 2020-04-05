/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 17:09:16 by sucho             #+#    #+#             */
/*   Updated: 2020/04/06 01:36:50 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		n;

	ptr_dst = dst;
	ptr_src = src;
	n = dstsize;

	if (n != 0)
	{
		while (--n)
		{
			if ((*ptr_dst++ = *ptr_src++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (dstsize != 0)
			*ptr_dst = '\0';
		while (*ptr_src++)
			;
	}
	return (ptr_src - src - 1);
}
