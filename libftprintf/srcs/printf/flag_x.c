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

int			flag_x(t_string *string, int i)
{
	int		tmp;
	char	*word;

	tmp = va_arg(string->list, int);
	if (string->sub_flags & SUB_SHARP)
	{
		string->new = ft_dstrjoin(string->new, "0x", 1);
		string->res += 2;
	}
	word = ft_itoabase(tmp, "0123456789abcdef");
	string->res += ft_strlen(word);
	string->new = ft_dstrjoin(string->new, word, 3);
	return (i + 1);
}
