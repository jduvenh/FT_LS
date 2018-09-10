/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:10:53 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/23 19:25:44 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		icount;

	icount = 0;
	if (src < dst)
	{
		icount = len;
		while (icount > 0)
		{
			icount--;
			((char*)dst)[icount] = ((char*)src)[icount];
		}
	}
	else
	{
		while (icount < len)
		{
			((char*)dst)[icount] = ((char*)src)[icount];
			icount++;
		}
	}
	return (dst);
}
