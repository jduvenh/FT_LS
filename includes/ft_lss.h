/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lss.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <jduvenh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 19:26:41 by jduvenh           #+#    #+#             */
/*   Updated: 2018/09/08 19:56:15 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LSS_H
# define FT_LSS_H
# include <dirent.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <pwd.h>
# include <grp.h>
# include <string.h>
# include <time.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <pwd.h>
# include <fcntl.h>
# include <string.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct	s_ls
{
	int		ac;
	int		i;
	int		j;
	char	**av;
	char	*output;
	char	*nameofdir;
	char	charflag1;
	char	charflag2;
	char	*buff;
	char	*dirl;
	char	*dirs;
	int		totaldir;
	int		dircount;
}				t_ls;

typedef	struct	s_perm
{
	DIR				*dir;
	struct dirent	*dent;
	char			*tyd;
	int				res;
	char			prefix;
	struct stat		permissions;
	struct passwd	*uid;
	struct group	*grp;
	DIR				*dirp;
	struct dirent	*entry;
	int				dirc;
	int				sze;
	char			time[100];
	char			permsize[11];
	mode_t			combs[1];
	size_t			i;
}				t_perm;

#endif
