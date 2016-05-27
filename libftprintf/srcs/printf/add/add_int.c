/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 18:46:38 by frmarinh          #+#    #+#             */
/*   Updated: 2016/05/27 18:46:44 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

void		add_int(t_string *string, int s)
{
	char *n;

	n = ft_itoa(s);
	string->res += ft_strlen(n);
	string->new = ft_dstrjoin(string->new, n, 3);
}

void		add_uint(t_string *string, int s)
{
	char *n;

	n = ft_uitoa(s);
	string->res += ft_strlen(n);
	string->new = ft_dstrjoin(string->new, n, 3);
}
