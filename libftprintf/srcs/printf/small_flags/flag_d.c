/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 14:28:09 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/18 14:28:10 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

static int	size_to(long long int nbr)
{
	int len;

	len = 1;
	while ((nbr = nbr / 10))
		len++;
	return (len);
}

static int	flag_ll(t_string *string, int i)
{
	long long int		tmp;
	int					sub_num;
	int					len;

	sub_num = 0;
	if (string->sub_num)
		sub_num = ft_atoi(string->sub_num);
	tmp = (long long int)va_arg(string->list, long long int);
	len = size_to(tmp);
	if (string->sub_flags & SUB_SPACE && sub_num == 0 \
		&& tmp > -1 && !(string->sub_flags & SUB_SUP))
		add_string(string, " ", 1);
	if (string->sub_flags & SUB_SHARP || (string->sub_flags \
		& SUB_SPACE && sub_num))
		while ((sub_num--) > len)
			add_string(string, " ", 1);
	if (string->sub_flags & SUB_SUP)
		if (tmp > 0)
			add_string(string, "+", 1);
	add_string(string, ft_itoa_llint(tmp), 3);
	return (i + 1);
}

static int flag_l(t_string *string, int i)
{
	long int		tmp;
	int				sub_num;
	int				len;

	sub_num = 0;
	if (string->sub_num)
		sub_num = ft_atoi(string->sub_num);
	tmp = (long int)va_arg(string->list, long int);
	len = size_to(tmp);
	if (string->sub_flags & SUB_SPACE && sub_num == 0 \
		&& tmp > -1 && !(string->sub_flags & SUB_SUP))
		add_string(string, " ", 1);
	if (string->sub_flags & SUB_SHARP || (string->sub_flags \
		& SUB_SPACE && sub_num))
		while ((sub_num--) > len)
			add_string(string, " ", 1);
	if (string->sub_flags & SUB_SUP)
		if (tmp > 0)
			add_string(string, "+", 1);
	add_string(string, ft_itoa_lint(tmp), 3);
	return (i + 1);
}

static int	flag_hh(t_string *string, int i)
{
	char		tmp;
	int			sub_num;
	int			len;

	sub_num = 0;
	if (string->sub_num)
		sub_num = ft_atoi(string->sub_num);
	tmp = (char)va_arg(string->list, int);
	len = size_to(tmp);
	if (string->sub_flags & SUB_SPACE && sub_num == 0 \
		&& tmp > -1 && !(string->sub_flags & SUB_SUP))
		add_string(string, " ", 1);
	if (string->sub_flags & SUB_SHARP || (string->sub_flags \
		& SUB_SPACE && sub_num))
		while ((sub_num--) > len)
			add_string(string, " ", 1);
	if (string->sub_flags & SUB_SUP)
		if (tmp > 0)
			add_string(string, "+", 1);
	add_string(string, ft_itoa(tmp), 3);
	return (i + 1);
}

static int	flag_h(t_string *string, int i)
{
	short		tmp;
	int			sub_num;
	int			len;

	sub_num = 0;
	if (string->sub_num)
		sub_num = ft_atoi(string->sub_num);
	tmp = (short)va_arg(string->list, int);
	len = size_to(tmp);
	if (string->sub_flags & SUB_SPACE && sub_num == 0 \
		&& tmp > -1 && !(string->sub_flags & SUB_SUP))
		add_string(string, " ", 1);
	if (string->sub_flags & SUB_SHARP || (string->sub_flags \
		& SUB_SPACE && sub_num))
		while ((sub_num--) > len)
			add_string(string, " ", 1);
	if (string->sub_flags & SUB_SUP)
		if (tmp > 0)
			add_string(string, "+", 1);
	add_string(string, ft_itoa(tmp), 3);
	return (i + 1);
}

static int	flag_z(t_string *string, int i)
{
	size_t		tmp;
	int			sub_num;
	int			len;

	sub_num = 0;
	if (string->sub_num)
		sub_num = ft_atoi(string->sub_num);
	tmp = (size_t)va_arg(string->list, size_t);
	len = size_to(tmp);
	if (string->sub_flags & SUB_SPACE && sub_num == 0 \
		&& !(string->sub_flags & SUB_SUP))
		add_string(string, " ", 1);
	if (string->sub_flags & SUB_SHARP || (string->sub_flags \
		& SUB_SPACE && sub_num))
		while ((sub_num--) > len)
			add_string(string, " ", 1);
	if (string->sub_flags & SUB_SUP)
		if (tmp > 0)
			add_string(string, "+", 1);
	add_string(string, ft_itoabase(tmp, "0123456789"), 3);
	return (i + 1);
}

static int	flag_default(t_string *string, int i)
{
	int		tmp;
	int		sub_num;
	int		len;

	sub_num = 0;
	if (string->sub_num)
		sub_num = ft_atoi(string->sub_num);
	tmp = get_int(string);
	len = size_to(tmp);
	
	if (string->sub_flags & SUB_SPACE && sub_num == 0 \
		&& tmp > -1 && !(string->sub_flags & SUB_SUP))
		add_string(string, " ", 1);
	if (string->sub_flags & SUB_SHARP || (string->sub_flags \
		& SUB_SPACE && sub_num))
		while ((sub_num--) > len)
			add_string(string, " ", 1);
	if (string->sub_flags & SUB_SUP)
		if (tmp > 0)
			add_string(string, "+", 1);
	add_string(string, ft_itoa(tmp), 3);
	return (i + 1);
}

int			flag_d(t_string *string, int i)
{
	if (!ft_strncmp("ll", string->converter.type, 2))
		return (flag_ll(string, i));
	else if (!ft_strncmp("l", string->converter.type, 1))
		return (flag_l(string, i));
	else if (!ft_strncmp("hh", string->converter.type, 2))
		return (flag_hh(string, i));
	else if (!ft_strncmp("h", string->converter.type, 1))
		return (flag_h(string, i));
	else if (!ft_strncmp("z", string->converter.type, 1))
		return (flag_z(string, i));
	else if (!ft_strncmp("j", string->converter.type, 1))
		return (flag_ll(string, i));
	else
		return (flag_default(string, i));
}
