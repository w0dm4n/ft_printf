/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 14:11:36 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/17 14:12:48 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <libft.h>
# include <stdarg.h>
# include <stdlib.h>

int						ft_printf(const char *s, ...);
int						ft_asprintf(char **ptr, const char *s, ...);

# ifdef PRINTF_PROG

typedef struct		s_string
{
	char			*s;
	va_list			list;
	unsigned int	res;
	short			sub_flags;
	char			*sub_num;
	char			*new;
}					t_string;

#  define FLAG string->s + (i + 1)
#  define SUB_SHARP 1024
#  define SUB_ZERO 2048
#  define SUB_INF 4096
#  define SUB_SUP 8192
#  define DELIMITER '%'
/*
**	HANDLER
*/

int						parse_flags(t_string *string, int i);
/*
**	SUBFLAGS
*/

int						sub_flags(t_string *string, int i);
/*
**	FLAGS
*/

int						flag_ld(t_string *string, int i);
int						flag_d(t_string *string, int i);
int						flag_s(t_string *string, int i);
int						flag_c(t_string *string, int i);
int						flag_x(t_string *string, int i);
int						flag_X(t_string *string, int i);
int						flag_C(t_string *string, int i);
int						flag_S(t_string *string, int i);

/*
**	GET
*/

char					get_char(t_string *t);
unsigned char			get_uchar(t_string *t);
wchar_t					get_wchar(t_string *t);
int						get_int(t_string *t);
unsigned int			get_lint(t_string *t);
unsigned long			get_ulong(t_string *t);
long int				get_long_int(t_string *t);
unsigned long int		get_ulong_int(t_string *t);
long long int			get_long_long_int(t_string *t);
unsigned long long int	get_ulong_long_int(t_string *t);
char					*get_string(t_string *t);
wchar_t					*get_wstring(t_string *t);

/*
**	ADD
*/

void					add_wchar(t_string *t, wchar_t c);
# endif
#endif
