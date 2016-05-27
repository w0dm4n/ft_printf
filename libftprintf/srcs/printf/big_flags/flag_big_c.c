/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_big_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 19:06:04 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/27 19:06:05 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"
#include <wchar.h>

int			flag_big_c(t_string *string, int i)
{
	wchar_t	tmp;

	tmp = 0;
	tmp = get_wchar(string);
	if (tmp == 0)
	{
		add_string(string, "(null)", 1);
		return (i + 1);
	}
	add_wchar(string, tmp);
	return (i + 1);
}
