/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rwx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:58:07 by jduvenh           #+#    #+#             */
/*   Updated: 2018/09/08 20:06:27 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include "libft.h"

void	ft_strmode(mode_t mode, char *buf)
{
	char		*chars;
	size_t		i;

	i = -1;
	chars = (char *)malloc(sizeof(char) * 8);
	chars = "rwxrwxrwx";
	while (++i < 9)
		buf[i] = ((mode & (1 << (8 - i))) ? chars[i] : '-');
	buf[9] = '\0';
}

void	initp(t_perm *p, t_ls *local)
{
	p->dir = opendir(local->nameofdir);
	p->dirc = 0;
	p->res = 0;
	p->prefix = ' ';
}

void	readid(t_perm *p)
{
	p->res = (p->permissions.st_mode);
	p->sze = (p->permissions.st_size);
	p->uid = (getpwuid(p->permissions.st_uid));
	p->grp = (getgrgid(p->permissions.st_gid));
	p->combs[0] = p->res;
	p->i = 0;
}

void	dldash(t_perm *p)
{
	if (p->res >= 16384 && p->res <= 16895)
	{
		p->prefix = 'd';
		p->dirp = opendir(p->dent->d_name);
	}
	else if (p->res >= 40960 && p->res <= 41471)
		p->prefix = 'l';
	else
		p->prefix = '-';
}

void	printrwx(t_perm *p)
{
	ft_printf("%c%s", p->prefix, p->permsize);
	ft_printf("  %d\t", p->permissions.st_nlink);
	ft_printf("%s\t", p->uid->pw_name);
	ft_printf("%s\t", p->grp->gr_name);
	ft_printf("%d\t", p->permissions.st_size);
	ft_printf("%.13s ", p->tyd);
	ft_printf("%s\t\n", p->dent->d_name);
}
