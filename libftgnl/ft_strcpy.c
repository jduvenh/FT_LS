/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 18:56:42 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/25 23:43:17 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	counter;
	int	len;

	counter = 0;
	len = ft_strlen(src);
	while (counter < len)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (dst);
}
