/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llyra-li <llyra-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 21:19:12 by llyra-li          #+#    #+#             */
/*   Updated: 2026/06/09 21:30:03 by llyra-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l1;
	size_t	l2;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_calloc(1, 1));
	l1 = 0;
	l2 = ft_strlen(s1) - 1;
	while (s1[l1] != '\0' && ft_strchr(set, s1[l1]))
		l1++;
	while (l2 > l1 && ft_strchr(set, s1[l2]))
		l2--;
	if (l1 > l2)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, l1, (l2 - l1) + 1));
}
