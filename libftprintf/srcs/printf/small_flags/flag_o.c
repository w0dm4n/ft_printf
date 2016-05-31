/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 18:37:06 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/28 18:37:07 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

static void	add_sharp(t_string *string)
{
	if (!(string->sub_flags & SUB_SHARP))
		return ;
	add_zero(string, 1);
}

static void		conv_ll(t_string *string, unsigned long long int tmp)
{
	char *word;

	word = ft_itoabase_ullint(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_l(t_string *string, unsigned long int tmp)
{
	char *word;

	word = ft_itoabase_uint(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_h(t_string *string, unsigned short tmp)
{
	char *word;

	word = ft_itoabase_uint(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_hh(t_string *string, unsigned char tmp)
{
	char *word;

	word = ft_itoabase(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_z(t_string *string, size_t tmp)
{
	char *word;

	word = ft_itoabase_uint(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_j(t_string *string, intmax_t tmp)
{
	char *word;

	word = ft_itoabase_uint(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_default(t_string *string, unsigned int tmp)
{
	char *word;

	word = ft_itoabase_uint(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

int				flag_o(t_string *string, int i)
{
	if (!ft_strncmp(string->converter.type, "ll", 2))
		conv_ll(string, get_ulong_long_int(string));
	else if (!ft_strncmp(string->converter.type, "l", 1))
		conv_l(string, get_ulong_int(string));
	else if (!ft_strncmp(string->converter.type, "hh", 2))
		conv_hh(string, (unsigned char)get_uint(string));
	else if (!ft_strncmp(string->converter.type, "h", 1))
		conv_h(string, get_ushort(string));
	else if (!ft_strncmp(string->converter.type, "z", 1))
		conv_z(string, get_size_t(string));
	else if (!ft_strncmp(string->converter.type, "j", 1))
		conv_j(string, get_intmax_t(string));
	else
		conv_default(string, get_uint(string));
	return (i + 1);
}