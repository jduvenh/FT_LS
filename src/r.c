/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:39:08 by jduvenh           #+#    #+#             */
/*   Updated: 2018/09/08 21:13:50 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <limits.h>
#include "ft_ls.h"
#include "libft.h"

void	list_dir(char *dir_name)
{
	DIR				*d;
	int				path_length;
	char			path[PATH_MAX];
	struct dirent	*entry;
	char			*dname;

	if (!(d = opendir(dir_name)))
		exit(EXIT_FAILURE);
	ftopendir(d);
	while (1)
	{
		entry = readdir(d);
		if (!entry)
			break ;
		dname = entry->d_name;
		ft_printf("%s\n", dname);
		if (entry->d_type & DT_DIR)
		{
			if ((ft_strcmp(dname, "..") != 0 &&
				ft_strcmp(dname, ".") != 0) &&
				dname[0] != '.')
				ftif(&path_length, dir_name, dname, path);
		}
	}
}

void	ftif(int *path_length, char *dir_name, char *d_name, char *path)
{
	*path_length += ft_printf("%s/%s", dir_name, d_name);
	path = (char*)malloc(sizeof(char) * *path_length + 1);
	ft_printf("%s\n", path);
	if (!*path_length)
	{
		ft_printf("Path length has got too long.\n");
		exit(EXIT_FAILURE);
	}
	list_dir(ft_strjoin(dir_name, ft_strjoin("/", d_name)));
}

void	ftopendir(DIR *d)
{
	if (!d)
	{
		d = opendir("..");
		if (!d)
		{
			ft_printf("Cannot open directory");
			exit(0);
		}
	}
}

void	ft_closedir(const char *dir_name)
{
	ft_printf("Could not close directory : %s\n", dir_name);
	exit(EXIT_FAILURE);
}
