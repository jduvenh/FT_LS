/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_permish.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:41:11 by jduvenh           #+#    #+#             */
/*   Updated: 2018/09/08 20:06:27 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include "libft.h"

void	ft_permno(t_ls *local)
{
	t_perm		p;

	initp(&p, local);
	while ((p.dent = readdir(p.dir)) != NULL)
	{
		lstat(p.dent->d_name, &p.permissions);
		if (local->dircount == 0)
			ft_printf("Total:  %i\n\0", p.permissions.st_size);
		local->dircount = 1;
		lstat(p.dent->d_name, &p.permissions);
		readid(&p);
		ft_strcpy(p.time, ctime(&p.permissions.st_mtime));
		dldash(&p);
		ft_strmode(p.combs[p.i], p.permsize);
		p.tyd = (char*)malloc(sizeof(char) * (ft_strlen(p.time) + 1));
		ft_strcpy(p.tyd, &p.time[4]);
		p.tyd[12] = '\0';
		if (!(p.dent->d_name[0] == '.'))
			printrwx(&p);
	}
}

void	ft_perm(t_ls *local)
{
	t_perm		p;

	initp(&p, local);
	while ((p.dent = readdir(p.dir)) != NULL)
	{
		lstat(p.dent->d_name, &p.permissions);
		if (local->dircount == 0)
			ft_printf("Total:  %i\n\0", p.permissions.st_size);
		local->dircount = 1;
		lstat(p.dent->d_name, &p.permissions);
		readid(&p);
		ft_strcpy(p.time, ctime(&p.permissions.st_mtime));
		dldash(&p);
		ft_strmode(p.combs[p.i], p.permsize);
		p.tyd = (char*)malloc(sizeof(char) * (ft_strlen(p.time) + 1));
		ft_strcpy(p.tyd, &p.time[4]);
		p.tyd[12] = '\0';
		printrwx(&p);
	}
}
