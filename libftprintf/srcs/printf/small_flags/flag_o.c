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

int				flag_o(t_string *string, int i)
{
	long int		tmp;
	char			*word;

	tmp = va_arg(string->list, long int);
	word = ft_itoabase_uint(tmp, "01234567");
	add_string(string, word, 3);
	return (i + 1);
}