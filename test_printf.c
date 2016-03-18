/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 15:32:16 by frmarinh          #+#    #+#             */
/*   Updated: 2016/03/17 15:33:16 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <wchar.h>

int		main(void)
{
	int res = 0;
	ft_printf("%#4d\n", 99);
	ft_printf("%#4d\n", 101);
	ft_printf("%#4d\n", 1000);
	ft_printf("%#4d\n", 1020);
	//res = printf("%#1d", 100);
	//printf("\n\n%d", res);
	return (0);
}
