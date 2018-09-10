/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 22:13:59 by jduvenh           #+#    #+#             */
/*   Updated: 2018/09/08 20:12:12 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include "ft_lss.h"

void		rmfoverflow(t_ls *local);
void		list_dir(char *dir_name);
void		ft_strmode(mode_t mode, char *buf);
void		ft_permno(t_ls *local);
void		get_dir(t_ls *local, int yn);
void		ft_opendiro(t_ls *local);
void		ft_constructor(int ac, char **av);
void		ft_opendir(t_ls *local);
void		ft_perm(t_ls *local);
void		ft_t(char *dirname, int yn);
void		ft_r(char *dirname, int yn);
void		ft_t2(DIR *dir, int yn);
void		ft_tsortingalgo(char **dirname, time_t *time, int total, int yn);
void		ft_tprintout(char **dirname, int total, int yn);
void		ft_r(char *dirname, int yn);
void		ft_r2(DIR *dir, int yn);
void		ft_rsortingalgo(char **dirname, int total, int yn);
void		ft_rprintout(char **dirname, int total, int yn);
int			file_access(char *filename);
void		flagsoverflow(t_ls *local);
void		readmyflags(t_ls *local);
void		ft_closedir(const char *dir_name);
void		ftopendir(DIR *d);
void		ftif(int *path_length, char *dir_name, char *d_name, char *path);
void		printrwx(t_perm *p);
void		dldash(t_perm *p);
void		readid(t_perm *p);
void		initp(t_perm *p, t_ls *local);

#endif
