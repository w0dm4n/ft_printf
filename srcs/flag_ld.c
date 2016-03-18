/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_ld.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 14:21:39 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/18 14:21:41 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

int			flag_ld(t_string *string, int i)
{
	unsigned int	tmp;

	tmp = va_arg(string->list, unsigned int);
	if (string->sub_flags & SUB_SUP)
	{
		if (tmp > 0)
			ft_putchar('+');
	}
	ft_putnbr(tmp);
	return (i + 2);
}
