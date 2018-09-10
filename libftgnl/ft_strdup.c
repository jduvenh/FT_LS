/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:01:59 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/28 15:46:05 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	if (!(s2 = (char *)malloc((sizeof(char) * len) + 1)))
		return (NULL);
	if (s2)
	{
		while (s1[i] != '\0')
		{
			s2[i] = s1[i];
			i++;
		}
	}
	s2[i] = '\0';
	return (s2);
}
