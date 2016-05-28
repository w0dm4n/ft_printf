/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 16:11:11 by frmarinh          #+#    #+#             */
/*   Updated: 2016/03/17 16:11:12 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

int			parse_one(t_string *string, int i)
{
	if (!ft_strncmp("s", FLAG, 1))
		i = flag_s(string, i);
	else if (!ft_strncmp("ld", FLAG, 2))
		i = flag_ld(string, i);
	else if (!ft_strncmp("c", FLAG, 1))
		i = flag_c(string, i);
	else if (!ft_strncmp("d", FLAG, 1) || !ft_strncmp("i", FLAG, 1))
		i = flag_d(string, i);
	else if (!ft_strncmp("x", FLAG, 1))
		i = flag_x(string, i);
	else if (!ft_strncmp("X", FLAG, 1))
		i = flag_big_x(string, i);
	else if (!ft_strncmp("C", FLAG, 1))
		i = flag_big_c(string, i);
	else if (!ft_strncmp("S", FLAG, 1))
		i = flag_big_s(string, i);
	else if (!ft_strncmp("%", FLAG, 1) && (i = i + 1))
		add_char(string, '%');
	return (i);
}

int			parse_two(t_string *string, int i)
{
	if (!ft_strncmp("p", FLAG, 1))
		i = flag_p(string, i);
	else if (!ft_strncmp("D", FLAG, 1))
		i = flag_big_d(string, i);
	else if (!ft_strncmp("o", FLAG, 1) || !ft_strncmp("O", FLAG, 1))
		i = flag_o(string, i);
	else if (!ft_strncmp("u", FLAG, 1))
		i = flag_u(string, i);
	else if (!ft_strncmp("U", FLAG, 1))
		i = flag_big_u(string, i);
	return (i);
}

int			parse_flags(t_string *string, int i)
{
	int save;

	if (!string->s[i])
		return (0);
	string->sub_num = NULL;
	save = i;
	while (string->s[i] && string->s[i] != DELIMITER)
	{
		i++;
		string->res++;
	}
	if (i > save)
		string->new = ft_dstrjoin(string->new, \
			ft_strndup(string->s + save, i - save), 3);
	if (string->s[i] && string->s[i] == DELIMITER && string->s[i + 1])
	{
		i = sub_flags(string, i);
		save = i + 1;
		if ((i = parse_one(string, i)) != save)
			i = parse_two(string, i);
	}
	else
		return (0);
	return (parse_flags(string, i + 1));
}
