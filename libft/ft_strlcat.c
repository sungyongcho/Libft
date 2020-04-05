/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 03:00:21 by sucho             #+#    #+#             */
/*   Updated: 2020/04/06 01:36:00 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	result;
	size_t	index_dest;
	size_t	index_src;

	index_dest = ft_strlen(dst);
	index_src = ft_strlen(src);
	if (dstsize < index_dest)
		result = index_src + dstsize;
	else
		result = index_dest + index_src;
	index_src = 0;
	while (index_dest + 1 < dstsize && src[index_src] != '\0')
		dst[index_dest++] = src[index_src++];
	dst[index_dest] = '\0';
	return (result);
}
