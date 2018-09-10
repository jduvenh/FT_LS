/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:46:05 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/28 15:56:22 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int character, size_t size)
{
	unsigned char	*point;
	int				i;

	i = 0;
	point = (unsigned char*)str;
	while (size > 0)
	{
		point[i] = character;
		i++;
		size--;
	}
	return (str);
}
