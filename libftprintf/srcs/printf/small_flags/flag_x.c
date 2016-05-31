/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 02:48:24 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/21 02:48:27 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

static void	add_sharp(t_string *string, int len, unsigned int tmp)
{
	int	space;
	int	zero;
	int	l;

	l = 1;
	if (!(string->sub_flags & SUB_SHARP))
		return ;
	space = ft_atoi(string->sub_num);
	while ((space = space / 10) > 0)
		l++;
	if ((zero = (ft_atoi(string->sub_num + (l + 1)) - len)) < 1 || tmp == 0)
		zero = 0;
	if ((space = (((ft_atoi(string->sub_num)) - len) - 2) - zero) < 1)
		space = 0;
	add_space(string, space);
	if (tmp != 0)
	{
		add_string(string, "0x", 1);
		add_zero(string, zero);
	}
}

static void		conv_ll(t_string *string, unsigned long long int tmp)
{
	char *word;
	int len;

	word = ft_itoabase_ullint(tmp, "0123456789abcdef");
	len = ft_strlen(word);
	add_sharp(string, len, tmp);
	add_string(string, word, 3);
}

static void		conv_l(t_string *string, unsigned long int tmp)
{
	char *word;
	int len;

	word = ft_itoabase_uint(tmp, "0123456789abcdef");
	len = ft_strlen(word);
	add_sharp(string, len, tmp);
	add_string(string, word, 3);
}

static void		conv_h(t_string *string, unsigned short tmp)
{
	char *word;
	int len;

	word = ft_itoabase_uint(tmp, "0123456789abcdef");
	len = ft_strlen(word);
	add_sharp(string, len, tmp);
	add_string(string, word, 3);
}

static void		conv_hh(t_string *string, unsigned char tmp)
{
	char *word;
	int len;

	word = ft_itoabase_uint(tmp, "0123456789abcdef");
	len = ft_strlen(word);
	add_sharp(string, len, tmp);
	add_string(string, word, 3);
}

static void		conv_z(t_string *string, size_t tmp)
{
	char *word;
	int len;

	word = ft_itoabase_uint(tmp, "0123456789abcdef");
	len = ft_strlen(word);
	add_sharp(string, len, tmp);
	add_string(string, word, 3);
}

static void		conv_j(t_string *string, intmax_t tmp)
{
	char *word;
	int len;

	word = ft_itoabase_uint(tmp, "0123456789abcdef");
	len = ft_strlen(word);
	add_sharp(string, len, tmp);
	add_string(string, word, 3);
}

static void		conv_default(t_string *string, unsigned int tmp)
{
	char *word;
	int len;

	word = ft_itoabase_uint(tmp, "0123456789abcdef");
	len = ft_strlen(word);
	add_sharp(string, len, tmp);
	add_string(string, word, 3);
}

int			flag_x(t_string *string, int i)
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
