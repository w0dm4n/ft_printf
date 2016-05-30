/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 02:48:24 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/21 02:48:27 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

static void	add_sharp(t_string *string, int len, unsigned int tmp)
{
	int	space;
	int	zero;
	int	l;

	l = 1;
	if (!(string->sub_flags & SUB_SHARP))
		return ;
	space = ft_atoi(string->sub_num);
	while ((space = space / 10) > 0)
		l++;
	if ((zero = (ft_atoi(string->sub_num + (l + 1)) - len)) < 1 || tmp == 0)
		zero = 0;
	if ((space = (((ft_atoi(string->sub_num)) - len) - 2) - zero) < 1)
		space = 0;
	add_space(string, space);
	if (tmp != 0)
	{
		add_string(string, "0x", 1);
		add_zero(string, zero);
	}
}

int			flag_x(t_string *string, int i)
{
	unsigned int		tmp;
	char				*word;
	int					len;

	tmp = va_arg(string->list, unsigned int);
	word = ft_itoabase_uint(tmp, "0123456789abcdef");
	len = ft_strlen(word);
	add_sharp(string, len, tmp);
	add_string(string, word, 3);
	return (i + 1);
}
