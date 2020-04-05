/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 00:17:14 by sucho             #+#    #+#             */
/*   Updated: 2020/04/04 21:02:30 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr_haystack;
	char	*ptr_needle;
	size_t	needle_len;
	size_t	index;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	index = 0;
	while (index + needle_len <= len)
	{
		ptr_haystack = (char *)haystack + index;
		ptr_needle = (char *)needle;
		while (*ptr_haystack == *ptr_needle && *ptr_needle != '\0')
		{
			ptr_haystack++;
			ptr_needle++;
		}
		if (*ptr_needle == '\0')
			return ((char *)haystack + index);
		index++;
	}
	return (NULL);
}
