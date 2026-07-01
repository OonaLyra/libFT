/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llyra-li <llyra-li@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 21:19:07 by llyra-li          #+#    #+#             */
/*   Updated: 2026/06/09 21:19:08 by llyra-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*lastcase;

	lastcase = NULL;
	while (*str != '\0')
	{
		if (*str == (char)ch)
			lastcase = (char *)str;
		str++;
	}
	if ((char)ch == '\0')
		return ((char *)str);
	return (lastcase);
}
