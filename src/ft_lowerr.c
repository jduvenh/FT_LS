/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:29:39 by jduvenh           #+#    #+#             */
/*   Updated: 2018/09/08 20:13:18 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_ls.h"

void	ft_r(char *dirname, int yn)
{
	DIR	*dir;

	dir = opendir(dirname);
	ft_r2(dir, yn);
}

void	ft_r2(DIR *dir, int yn)
{
	char			*dirname[100];
	struct dirent	*dent;
	int				i;

	i = 0;
	while ((dent = readdir(dir)) != NULL)
	{
		dirname[i] = dent->d_name;
		i++;
	}
	ft_rsortingalgo(dirname, i, yn);
}

void	ft_rsortingalgo(char **dirname, int total, int yn)
{
	char			*dirnametemp;
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (i < total)
	{
		while (j < total)
		{
			if (ft_strcmp(dirname[i], dirname[j]) < 0)
			{
				dirnametemp = dirname[i];
				dirname[i] = dirname[j];
				dirname[j] = dirnametemp;
			}
			j++;
		}
		j = 0;
		i++;
	}
	ft_rprintout(dirname, total, yn);
}

void	ft_rprintout(char **dirname, int total, int yn)
{
	while (total > 0)
	{
		total--;
		if (!yn)
		{
			if (dirname[total][0] != '.')
				ft_printf("%s\n", dirname[total]);
		}
		else
			ft_printf("%s\n", dirname[total]);
	}
}
