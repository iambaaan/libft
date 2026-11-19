/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-atr <sael-atr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:08:05 by sael-atr          #+#    #+#             */
/*   Updated: 2026/10/23 20:28:22 by sael-atr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_size(char const *s1, char const *s2)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
		i++;
	len += i;
	i = 0;
	while (s2[i])
		i++;
	len += i;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		size;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	size = calc_size(s1, s2);
	res = malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	size = 0;
	while (s2[size])
	{
		res[i] = s2[size];
		size++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
