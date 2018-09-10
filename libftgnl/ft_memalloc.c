/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:52:30 by jduvenh           #+#    #+#             */
/*   Updated: 2018/06/01 17:47:49 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	if (!(size))
		return (NULL);
	mem = malloc(sizeof(void) * size);
	if (!(mem))
		return (NULL);
	ft_bzero(mem, sizeof(void) * size);
	return (mem);
}
