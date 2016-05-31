/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_big_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 20:20:43 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/28 20:20:48 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

static void		conv_ll(t_string *string, unsigned long long int tmp)
{
	add_uint_long_long(string, tmp);
}

static void		conv_h(t_string *string, unsigned short tmp)
{
	add_uint_long_long(string, tmp);
}

static void		conv_hh(t_string *string, unsigned char tmp)
{
	add_uint_long_long(string, tmp);
}

static void		conv_z(t_string *string, size_t tmp)
{
	add_uint_long_long(string, tmp);
}

static void		conv_j(t_string *string, intmax_t tmp)
{
	add_uint_long_long(string, tmp);
}

static void		conv_default(t_string *string, unsigned long int tmp)
{
	add_uint_long(string, tmp);
}

int				flag_big_u(t_string *string, int i)
{
	if (!ft_strncmp(string->converter.type, "ll", 2))
		conv_ll(string, get_ulong_long_int(string));
	else if (!ft_strncmp(string->converter.type, "hh", 2))
		conv_hh(string, (unsigned char)get_uint(string));
	else if (!ft_strncmp(string->converter.type, "h", 1))
		conv_h(string, get_ushort(string));
	else if (!ft_strncmp(string->converter.type, "z", 1))
		conv_z(string, get_size_t(string));
	else if (!ft_strncmp(string->converter.type, "j", 1))
		conv_j(string, get_intmax_t(string));
	else
		conv_default(string, get_long_int(string));
	return (i + 1);
}
