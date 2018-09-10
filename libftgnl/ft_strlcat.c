/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:00:43 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/31 17:12:51 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dest[j] && j < n)
		j++;
	while ((src[k]) && ((j + k + 1) < n))
	{
		dest[j + k] = src[k];
		k++;
	}
	if (j != n)
		dest[j + k] = '\0';
	return (j + ft_strlen(src));
}
