/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:27:55 by jduvenh           #+#    #+#             */
/*   Updated: 2018/05/27 19:02:49 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		neg;
	int		val;

	val = 0;
	neg = 1;
	while ((*str == '\t') || (*str == '\v')
			|| (*str == '\n') || (*str == '\r')
			|| (*str == '\f') || (*str == ' '))
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		val = (val * 10) + (*str - 48);
		str++;
	}
	return (val * neg);
}
