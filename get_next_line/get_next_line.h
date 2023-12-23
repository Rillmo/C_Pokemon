/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkim2 <junkim2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 23:35:56 by macbookpro        #+#    #+#             */
/*   Updated: 2023/12/23 17:33:01 by junkim2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# ifndef FD_LIMIT
#  define FD_LIMIT 100000
# endif

# include <stdlib.h>
# include <unistd.h>

# define _ERROR	0

typedef struct s_lst
{
	char	*buff;
	int		total_size;
	int		current_size;
	int		flag;
}	t_lst;

char	*get_next_line(int fd);
char	*alloc_double(t_list *lst);
int		my_strlen(char *str);
void	*my_calloc(int count, int size);
char	*my_strchr(char *str, char c);
char	*my_strdup(char *s1);
char	*err_handler(t_list *lst);

#endif