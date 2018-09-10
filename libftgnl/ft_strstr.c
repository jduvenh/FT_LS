/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:49:58 by jduvenh           #+#    #+#             */
/*   Updated: 2018/06/01 21:49:46 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *needle)
{
	int	hc;
	int	nc;
	int	nsize;

	hc = 0;
	nc = 0;
	nsize = ft_strlen(needle);
	if (nsize == 0)
		return ((char *)str);
	while (str[hc] != '\0')
	{
		while (needle[nc] == str[hc + nc])
		{
			if (nc == nsize - 1)
				return ((char *)str + hc);
			nc++;
		}
		nc = 0;
		hc++;
	}
	return (0);
}
