/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 19:04:14 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/28 19:04:27 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

int				flag_u(t_string *string, int i)
{
	unsigned int		tmp;

	tmp = va_arg(string->list, unsigned int);
	add_uint(string, tmp);
	return (i + 1);
}