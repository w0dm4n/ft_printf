/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 12:52:54 by jguyet            #+#    #+#             */
/*   Updated: 2016/05/22 12:52:56 by jguyet           ###   ########.fr       */
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