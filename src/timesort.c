/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timesort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:04:04 by jduvenh           #+#    #+#             */
/*   Updated: 2018/09/08 20:09:09 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_ls.h"

void	ft_t(char *dirname, int yn)
{
	DIR		*dir;

	dir = opendir(dirname);
	ft_t2(dir, yn);
}

void	ft_t2(DIR *dir, int yn)
{
	time_t			time[100];
	char			*dirname[100];
	struct dirent	*dent;
	struct stat		permissions;
	int				i;

	i = 0;
	while ((dent = readdir(dir)) != NULL)
	{
		lstat(dent->d_name, &permissions);
		dirname[i] = dent->d_name;
		time[i] = permissions.st_mtime;
		i++;
	}
	ft_tsortingalgo(dirname, time, i, yn);
}

void	ft_tsortingalgo(char **dirname, time_t *time, int total, int yn)
{
	time_t	timetemp;
	char	*dirnametemp;
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (++i < total)
	{
		while (++j < total)
		{
			if (time[i] < time[j])
			{
				timetemp = time[i];
				time[i] = time[j];
				time[j] = timetemp;
				dirnametemp = dirname[i];
				dirname[i] = dirname[j];
				dirname[j] = dirnametemp;
			}
		}
		j = 0;
	}
	ft_tprintout(dirname, total, yn);
}

void	ft_tprintout(char **dirname, int total, int yn)
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

int		file_access(char *filename)
{
	struct stat		mycopy;

	if (lstat(filename, &mycopy) == 0)
		return (0);
	else
		return (1);
}
