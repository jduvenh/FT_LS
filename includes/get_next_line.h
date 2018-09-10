/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 00:56:00 by jduvenh           #+#    #+#             */
/*   Updated: 2018/06/12 18:54:55 by jduvenh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# define BUFF_SIZE 100

typedef struct		s_gnl
{
	char			*text;
	char			*tempo;
	struct s_gnl	*next;
	int				fd;
}					t_gnl;

int					get_next_line(int const fd, char **line);
#endif
