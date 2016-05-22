/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_C.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 10:32:18 by jguyet            #+#    #+#             */
/*   Updated: 2016/05/22 10:32:20 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define PRINTF_PROG

#include "printf.h"
#include <wchar.h>

int			flag_C(t_string *string, int i)
{
	wchar_t	tmp;

	tmp = 0;
	tmp = get_wchar(string);
	if (tmp == 0)
	{
		string->new = ft_dstrjoin(string->new, "(null)", 1);
		return (i + 1);
	}
	add_wchar(string, tmp);
	return (i + 1);
}
