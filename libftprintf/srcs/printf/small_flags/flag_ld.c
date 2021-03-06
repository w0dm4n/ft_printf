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
	long int	tmp;

	tmp = get_long_int(string);
	if (string->sub_flags & SUB_SUP)
	{
		if (tmp > 0)
			add_string(string, "+", 1);
	}
	add_string(string, ft_itoa_lint(tmp), 3);
	return (i + 2);
}
