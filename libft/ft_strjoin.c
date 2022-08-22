/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:53:03 by sucho             #+#    #+#             */
/*   Updated: 2022/08/23 01:33:04 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*result;

	if (s1 == 0 && s2 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(sizeof(char) * len);
	if (!result)
		return (0);
	ft_strlcpy(result, s1, len);
	ft_strlcat(result, s2, len);
	result[len - 1] = '\0';
	return (result);
}
