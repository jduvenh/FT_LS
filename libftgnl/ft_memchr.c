/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 19:08:16 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/23 19:22:24 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			icount;
	unsigned char	*src;
	unsigned char	chr;

	icount = 0;
	src = (unsigned char*)s;
	chr = (unsigned char)c;
	while (icount < n)
	{
		if (src[icount] == chr)
		{
			return (&src[icount]);
		}
		icount++;
	}
	return (NULL);
}
