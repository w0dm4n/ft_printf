/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_S.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 10:32:36 by jguyet            #+#    #+#             */
/*   Updated: 2016/05/22 10:32:37 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

#include <wchar.h>

int			flag_S(t_string *string, int i)
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