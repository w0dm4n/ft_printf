/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 02:53:52 by jguyet            #+#    #+#             */
/*   Updated: 2016/03/21 02:53:54 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

static void	add_sharp(t_string *string, int len)
{
	int	space;
	int	zero;
	int	l;

	l = 1;
	if (!(string->sub_flags & SUB_SHARP))
		return ;
	space = ft_atoi(string->sub_num);
	while ((space = space / 10))
		l++;
	zero = (ft_atoi(string->sub_num + (l + 1)) - len);
	space = (((ft_atoi(string->sub_num) - len) - zero) - 2);
	while (space--)
		add_string(string, " ", 1);
	add_string(string, "0X", 1);
	while (zero--)
		add_string(string, "0", 1);
}

int			flag_X(t_string *string, int i)
{
	int		tmp;
	char	*word;
	int		len;

	tmp = va_arg(string->list, int);
	word = ft_itoabase(tmp, "0123456789ABCDEF");
	len = ft_strlen(word);
	add_sharp(string, len);
	add_string(string, word, 3);
	return (i + 1);
}