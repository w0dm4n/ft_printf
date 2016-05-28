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
	unsigned short	sub_flags;
	char			*sub_num;
	char			*new;
}					t_string;

#  define FLAG string->s + (i + 1)
#  define SUB_SHARP 1024
#  define SUB_ZERO 2048
#  define SUB_INF 4096
#  define SUB_SUP 8192
#  define SUB_SPACE 16384
#  define DELIMITER '%'
#  define MAX_UINT 4294967295
/*
**	HANDLER
*/

int						parse_flags(t_string *string, int i);
/*
** FUNCTION
*/

void					add_string(t_string *string, char *s, int del);
void					add_char(t_string *string, char c);
void					add_zero(t_string *string, int zero);
void					add_space(t_string *string, int space);
void					add_int(t_string *string, int s);
void					add_uint(t_string *string, unsigned int s);
void					add_uint_long(t_string *string, unsigned long int s);
void					add_long_int(t_string *string, long int s);
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
int						flag_big_x(t_string *string, int i);
int						flag_big_c(t_string *string, int i);
int						flag_big_s(t_string *string, int i);
int						flag_big_d(t_string *string, int i);
int						flag_p(t_string *string, int i);
int						flag_o(t_string *string, int i);
int						flag_u(t_string *string, int i);
int						flag_big_u(t_string *string, int i);

/*
**	GET
*/

char					get_char(t_string *t);
unsigned char			get_uchar(t_string *t);
wchar_t					get_wchar(t_string *t);
int						get_int(t_string *t);
unsigned int			get_uint(t_string *t);
unsigned long			get_ulong(t_string *t);
long int				get_long_int(t_string *t);
unsigned long int		get_ulong_int(t_string *t);
long long int			get_long_long_int(t_string *t);
unsigned long long int	get_ulong_long_int(t_string *t);
char					*get_string(t_string *t);
wchar_t					*get_wstring(t_string *t);
double					get_double(t_string *t);

/*
**	ADD
*/

void					add_wchar(t_string *t, wchar_t c);
# endif
#endif
