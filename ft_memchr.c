/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llyra-li <llyra-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 21:17:06 by llyra-li          #+#    #+#             */
/*   Updated: 2026/06/30 22:47:54 by llyra-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	t;
	size_t			i;

	ptr = (unsigned char *)s;
	t = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == t)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
