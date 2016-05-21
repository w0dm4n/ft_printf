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
	res = ft_printf("%#50.20X\n", 255555555);
	ft_printf("%d\n", res);
	res = printf("%#50.20X\n", 255555555);
	ft_printf("%d\n", res);
	ft_printf("%x\n", 1000);
	ft_printf("%x\n", 1020);
	//res = printf("%#1d", 100);
	//printf("\n\n%d", res);
	return (0);
}
