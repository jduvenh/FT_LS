/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:37:02 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/28 19:24:04 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	i = (unsigned char)c;
	while (n > 0)
	{
		*s2 = *s1;
		if (*s1 == i)
			return ((unsigned char *)s2 + 1);
		else
		{
			s1++;
			s2++;
			n--;
		}
	}
	return (NULL);
}
