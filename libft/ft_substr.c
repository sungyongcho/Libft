/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:33:37 by sucho             #+#    #+#             */
/*   Updated: 2023/08/05 16:05:21 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
		char	*sub;
		size_t	i;

		if (start >= ft_strlen(s))
		{
				sub = (char *)malloc(sizeof (char) * 1);
				if (sub != 0)
						sub[0] = '\0';
				return (sub);
		}
		else if (len > ft_strlen(s + start))
				sub = (char *)malloc(sizeof (char) * (ft_strlen(s + start) + 1));
		else
				sub = (char *)malloc(sizeof (char) * (len + 1));
		if (sub == 0)
				return (NULL);
		i = 0;
		while (i < len && s[start + i] && start < ft_strlen(s))
		{
				sub[i] = s[(size_t)start + i];
				i++;
		}
		sub[i] = '\0';
		return (sub);
}
