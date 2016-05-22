/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 13:04:56 by jguyet            #+#    #+#             */
/*   Updated: 2016/05/22 13:04:58 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_PROG

#include "printf.h"

void		add_char(t_string *string, char c)
{
	string->res += 1;
	string->new = ft_dstrjoin_char(string->new, c, 1);
}
