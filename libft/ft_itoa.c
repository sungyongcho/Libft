/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: sucho <sucho@student.42.fr>				+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2020/04/26 00:42:17 by sucho			 #+#	#+#			 */
/*   Updated: 2023/08/05 16:00:49 by sucho            ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
void	assign_nbr(char *result, int size, long nbr)
{
		if (nbr == 0)
				result[0] = '0';
		result[size] = '\0';
		size--;
		while (nbr)
		{
				result[size--] = nbr % 10 + '0';
				nbr /= 10;
		}
}

static int	count_size(int n)
{
		int	n_digits;
		int	size;

		n_digits = 0;
		size = 0;
		if (n == 0)
				n_digits = 1;
		else
		{
				if (n < 0)
						size++;
				while (n)
				{
						n_digits++;
						n /= 10;
				}
		}
		size += n_digits;
		return (size);
}

char	*ft_itoa(int n)
{
		char	*result;
		int		size;
		long	nbr;

		size = count_size(n);
		nbr = (long)n;
		result = (char *)malloc(sizeof (char) * (size + 1));
		if (result == 0)
				return (NULL);
		if (nbr < 0)
		{
				result[0] = '-';
				nbr *= -1;
		}
		assign_nbr(result, size, nbr);
		return (result);
}
