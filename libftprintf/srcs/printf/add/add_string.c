/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 12:52:54 by jguyet            #+#    #+#             */
/*   Updated: 2016/05/22 12:52:56 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

void		add_string(t_string *string, char *s, int del)
{
	string->res += ft_strlen(s);
	string->new = ft_dstrjoin(string->new, s, del);
}
