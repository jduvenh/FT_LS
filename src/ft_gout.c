/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gout.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 08:05:33 by jduvenh           #+#    #+#             */
/*   Updated: 2018/09/08 19:36:48 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include "libft.h"

void	ft_opendir(t_ls *local)
{
	DIR				*dir;
	struct dirent	*dent;

	dir = opendir(local->nameofdir);
	if (dir != NULL)
	{
		while ((dent = readdir(dir)) != NULL)
		{
			ft_printf("%s", dent->d_name);
			ft_printf("   ");
		}
	}
	ft_printf("\n");
}

void	get_dir(t_ls *local, int yn)
{
	DIR				*dir;
	struct dirent	*dent;

	dir = opendir(local->nameofdir);
	if (dir != NULL)
	{
		local->dirs = "@";
		while ((dent = readdir(dir)) != NULL)
		{
			if (yn)
			{
				if (!(dent->d_name[0] == '.'))
				{
					local->dirs = ft_strjoin("@", dent->d_name);
					local->dirs = ft_strjoin(local->dirs, "@");
				}
			}
			else
			{
				local->dirs = ft_strjoin("@", dent->d_name);
				local->dirs = ft_strjoin(local->dirs, "@");
			}
		}
	}
}

void	ft_opendiro(t_ls *local)
{
	DIR				*dir;
	struct dirent	*dent;

	dir = opendir(local->nameofdir);
	if (dir != NULL)
	{
		while ((dent = readdir(dir)) != NULL)
		{
			if (!(dent->d_name[0] == '.'))
			{
				ft_printf("%s", dent->d_name);
				ft_printf("   ");
			}
		}
	}
	ft_printf("\n");
}
