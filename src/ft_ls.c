/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:50:46 by jduvenh           #+#    #+#             */
/*   Updated: 2018/09/08 21:22:08 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	flagsoverflow(t_ls *local)
{
	if (file_access(local->av[local->ac - 1]))
		ft_printf("ft_ls: %s: No such file or directory\n",
		local->av[local->ac - 1]);
	else
	{
		if (local->ac == 2)
		{
			local->nameofdir = local->av[1];
			ft_opendiro(local);
		}
		else if (local->ac > 2)
		{
			local->nameofdir = local->av[local->ac - 1];
			local->ac = 2;
			readmyflags(local);
		}
		else
			ft_opendiro(local);
	}
}

void	rmfoverflow(t_ls *local)
{
	if (local->ac < 3)
	{
		if (local->av[1][local->j] == 'r')
		{
			if (local->av[1][local->j + 1] == '\0')
				ft_r(local->nameofdir, 0);
			else
				ft_r(local->nameofdir, 1);
		}
		else if (local->av[1][local->j] == 't')
		{
			if (local->av[1][local->j + 1] == '\0')
				ft_t(local->nameofdir, 0);
			else
				ft_t(local->nameofdir, 1);
		}
		else if (local->av[1][0] == '-')
			ft_printf("INVALID FLAG!\n");
	}
	else
		flagsoverflow(local);
}

void	readmyflags(t_ls *local)
{
	if ((local->ac > 1) && (local->av[local->i][0] == '-'))
	{
		if (local->av[local->i][local->j - 1])
		{
			if (local->av[1][local->j] == 'a')
				ft_opendir(local);
			else if (local->av[1][local->j] == 'l')
				if (local->av[1][local->j + 1] == '\0')
					ft_permno(local);
				else
					ft_perm(local);
			else if (local->av[1][local->j] == 'R')
			{
				list_dir(local->nameofdir);
			}
			else
				rmfoverflow(local);
		}
	}
	else
		flagsoverflow(local);
}

void	constructor(int ac, char **av)
{
	t_ls	local;

	local.i = 1;
	local.j = 1;
	local.ac = ac;
	local.av = av;
	local.nameofdir = ".";
	local.dircount = 0;
	if (local.ac < 3)
		readmyflags(&local);
	else
		flagsoverflow(&local);
}

int		main(int ac, char **av)
{
	constructor(ac, av);
	return (0);
}
