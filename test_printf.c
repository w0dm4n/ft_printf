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

#include <printf.h>
#include <libft.h>
#include <wchar.h>
#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int		res = 0;
	char	*test;

	test = ft_strdup("Test");
	//res = ft_printf("%p\n", &test);
	res = ft_printf("%p\n", &test);
	ft_printf("%d\n", res);
	//ft_printf("\n%d\n", res);
	return (0);
}
