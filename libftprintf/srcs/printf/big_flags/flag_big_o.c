/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_big_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 19:10:51 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/27 19:10:52 by frmarinh         ###   ########.fr       */
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

static void		conv_ll(t_string *string, long long int tmp)
{
	char *word;

	word = ft_llitoabase(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_h(t_string *string, short tmp)
{
	char *word;

	word = ft_stoabase(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_z(t_string *string, size_t tmp)
{
	char *word;

	word = ft_ztoabase(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_j(t_string *string, intmax_t tmp)
{
	char *word;

	word = ft_llitoabase(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

static void		conv_default(t_string *string, long int tmp)
{
	char *word;

	word = ft_litoabase(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
}

int			flag_big_o(t_string *string, int i)
{
	if (!ft_strncmp(string->converter.type, "ll", 2))
		conv_ll(string, get_long_long_int(string));
	else if (!ft_strncmp(string->converter.type, "h", 1))
		conv_h(string, get_short(string));
	else if (!ft_strncmp(string->converter.type, "z", 1))
		conv_z(string, get_size_t(string));
	else if (!ft_strncmp(string->converter.type, "j", 1))
		conv_j(string, get_intmax_t(string));
	else
		conv_default(string, get_long_int(string));
	return (i + 1);
}
