/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_big_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 19:12:21 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/27 19:12:22 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG
#include "printf.h"
#include <stdio.h>

static void	add_sharp(t_string *string, int len)
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
	if ((zero = (ft_atoi(string->sub_num + (l + 1)) - len)) < 1)
		zero = 0;
	if ((space = ((ft_atoi(string->sub_num)) - len) - 2) < 1)
		space = 0;
	add_space(string, space);
	add_string(string, "0X", 1);
	add_zero(string, zero);
}

int			flag_big_x(t_string *string, int i)
{
	unsigned int		tmp;
	char				*word;
	int					len;

	tmp = va_arg(string->list, unsigned int);
	word = ft_itoabase_uint(tmp, "0123456789ABCDEF");
	len = ft_strlen(word);
	add_sharp(string, len);
	add_string(string, word, 3);
	return (i + 1);
}
