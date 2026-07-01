/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llyra-li <llyra-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 21:19:18 by llyra-li          #+#    #+#             */
/*   Updated: 2026/06/09 21:19:19 by llyra-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	i = 0;
	l = ft_strlen(s) - start;
	if (len > l)
		len = l;
	substr = (char *)malloc((len * sizeof(char)) + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr [i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
