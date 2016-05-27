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

static int	size_to(int nbr)
{
	int len;

	len = 1;
	while ((nbr = nbr / 10))
		len++;
	return (len);
}		

int			flag_d(t_string *string, int i)
{
	int		tmp;
	int		sub_num;
	int		len;

	sub_num = 0;
	if (string->sub_num)
		sub_num = ft_atoi(string->sub_num);
	tmp = get_int(string);
	len = size_to(tmp);
	if (string->sub_flags & SUB_SHARP)
		while ((sub_num--) > len)
			add_string(string, " ", 1);
	if (string->sub_flags & SUB_SUP)
	{
		if (tmp > 0)
			add_string(string, "+", 1);
		else if (tmp < 0)
			add_string(string, "-", 1);
	}
	add_string(string, ft_itoa(tmp), 3);
	return (i + 1);
}
