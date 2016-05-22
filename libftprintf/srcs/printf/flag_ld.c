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
	long unsigned int	tmp;

	tmp = get_ulong_int(string);
	if (string->sub_flags & SUB_SUP)
	{
		if (tmp > 0)
			string->new = ft_dstrjoin(string->new, "+", 1);
	}
	string->new = ft_dstrjoin(string->new, ft_itoa(tmp), 3);
	return (i + 2);
}
