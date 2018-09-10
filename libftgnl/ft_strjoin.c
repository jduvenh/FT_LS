/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:56:34 by jduvenh           #+#    #+#             */
/*   Updated: 2018/06/02 10:40:14 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		icount;

	icount = 0;
	if ((s1) && (s2))
	{
		icount = (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		nstr = (char *)malloc(icount);
		if (nstr == NULL)
			return (NULL);
		ft_strclr(nstr);
		ft_strcat(nstr, s1);
		ft_strcat(nstr, s2);
		return (nstr);
	}
	else
		return (NULL);
}
