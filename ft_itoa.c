/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-atr <sael-atr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:35:59 by sael-atr          #+#    #+#             */
/*   Updated: 2026/10/25 16:19:11 by sael-atr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	long	nb;
	int		i;

	i = 0;
	nb = n;
	if (nb <= 0)
	{
		nb *= -1;
		i++;
	}
	while (nb)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;
	long	nb;

	nb = n;
	size = count(n);
	res = malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (nb < 0)
		nb *= -1;
	res[size] = '\0';
	while (size > 0)
	{
		res[size - 1] = (nb % 10) + '0';
		nb /= 10;
		size--;
		if (nb == 0)
			break ;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
