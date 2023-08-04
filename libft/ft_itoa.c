/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_itoa.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: sucho <sucho@student.42.fr>				+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2020/04/26 00:42:17 by sucho			 #+#	#+#			 */
/*   Updated: 2023/08/05 01:52:51 by sucho			###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_digits(int n)
{
	int				i;
	unsigned int	un;

	i = 1;
	if (n < 0)
	{
		un = (unsigned int)-n;
		i++;
	}
	else
		un = (unsigned int)n;
	while (un >= 10)
	{
		un /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	un;

	len = ft_get_digits(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		un = (unsigned int)-n;
	}
	else
		un = (unsigned int)n;
	str[len] = '\0';
	while (len-- > 0)
	{
		if (str[len] != '-')
		{
			str[len] = un % 10 + '0';
			un /= 10;
		}
	}
	return (str);
}
