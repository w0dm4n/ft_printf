/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_big_S.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 19:10:51 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/27 19:10:52 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG
#include "printf.h"
#include <wchar.h>

int			flag_big_s(t_string *string, int i)
{
	wchar_t	*tmp;
	int		n;

	tmp = NULL;
	tmp = get_wstring(string);
	if (tmp == NULL)
	{
		add_string(string, "(null)", 1);
		return (i + 1);
	}
	n = -1;
	while (tmp[++n])
		add_wchar(string, tmp[n]);
	return (i + 1);
}
