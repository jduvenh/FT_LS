/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 16:10:27 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/28 16:18:28 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;

	nsrc = (unsigned char *)src;
	ndst = (unsigned char *)dst;
	while (n--)
	{
		*ndst++ = *nsrc++;
	}
	return (dst);
}
