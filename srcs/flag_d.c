/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 14:28:09 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/18 14:28:10 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

int			flag_d(t_string *string, int i)
{
	int		tmp;

	tmp = va_arg(string->list, int);
	if (string->sub_flags & SUB_SUP)
	{
		if (tmp > 0)
			ft_putchar('+');
		else if (tmp < 0)
			ft_putchar('-');
	}
	ft_putnbr(tmp);
	return (i + 2);
}

