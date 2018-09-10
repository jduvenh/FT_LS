/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:55:02 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/31 17:11:32 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*nstr;

	if (!f || !s)
		return (NULL);
	i = 0;
	nstr = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (nstr)
	{
		while (s[i])
		{
			nstr[i] = f((char)s[i]);
			i++;
		}
		nstr[i] = '\0';
	}
	return (nstr);
}
