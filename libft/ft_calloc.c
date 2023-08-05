/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sucho <sucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 02:23:32 by sucho             #+#    #+#             */
/*   Updated: 2023/08/05 15:54:50 by sucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	a;

	a = count * size;
	if (size > 0 && a / size != count)
		return (0);
	result = malloc(count * size);
	if (!result)
		return (0);
	ft_memset(result, 0, size * count);
	return (result);
}
