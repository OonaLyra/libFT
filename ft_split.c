/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llyra-li <llyra-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 21:18:01 by llyra-li          #+#    #+#             */
/*   Updated: 2026/06/09 21:18:02 by llyra-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	int		in_word;
	size_t	count;
	size_t	i;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	**free_all(char **tab, size_t i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (NULL);
}

static char	**fill_tab(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	w;
	size_t	start;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		tab[w] = ft_substr(s, start, (i - start));
		if (!tab[w])
			return (free_all(tab, w));
		w++;
	}
	tab[w] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!tab)
		return (NULL);
	return (fill_tab(s, c, tab));
}
