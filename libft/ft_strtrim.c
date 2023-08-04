/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 23:39:09 by sucho             #+#    #+#             */
/*   Updated: 2023/08/04 22:36:55 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*result;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *(s1)))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, *(s1 + len)))
		len--;
	result = ft_substr((char *)s1, 0, len + 1);
	return (result);
}
