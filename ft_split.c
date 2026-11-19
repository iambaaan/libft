/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-atr <sael-atr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:39:47 by sael-atr          #+#    #+#             */
/*   Updated: 2026/10/31 18:47:43 by sael-atr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_elemen(char **s, int i)
{
	while (i > 0)
	{
		i--;
		free(s[i]);
	}
	free(s);
}

static int	count_word(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
			count++;
		in_word = (*s != c);
		s++;
	}
	return (count);
}

static char	*words(char const *s, char c, char *word)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = *s;
		i++;
		s++;
	}
	word[i] = '\0';
	return (word);
}

static char	**fill_words(char **res, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
		{
			res[i] = words(s, c, res[i]);
			if (!res[i])
			{
				free_elemen(res, i);
				return (NULL);
			}
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		size;

	if (!s)
		return (NULL);
	size = count_word(s, c);
	res = malloc((size + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (fill_words(res, s, c));
}
