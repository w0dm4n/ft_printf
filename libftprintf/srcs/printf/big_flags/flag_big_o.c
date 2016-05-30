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

int			flag_big_o(t_string *string, int i)
{
	long int		tmp;
	char			*word;

	tmp = va_arg(string->list, long int);
	word = ft_itoabase_lint(tmp, "01234567");
	if (tmp != 0)
		add_sharp(string);
	add_string(string, word, 3);
	return (i + 1);
}
