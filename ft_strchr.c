/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llyra-li <llyra-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 21:18:05 by llyra-li          #+#    #+#             */
/*   Updated: 2026/06/09 21:18:06 by llyra-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str != '\0')
	{
		if (*str == (char)ch)
			return ((char *)str);
		str++;
	}
	if ((char)ch == '\0')
		return ((char *)str);
	return (NULL);
}
