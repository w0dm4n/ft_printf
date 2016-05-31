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
#include <limits.h>

int		main(void)
{
	char *c;

	c = NULL;
	printf("%O\n", 42);
	//ft_printf("%hhd", (131));
	//ft_printf("%hhd", (131));
	/*ft_printf("res :\t%d\n", ft_printf("{% c}\n", 0));
	ft_printf("res :\t%d\n", printf("{%           c}\n", 0));*/
	/*asprintf(&c, "% c", 0);
	int i = 0;

	while (i < 200)
	{
		if ((char)i == c[0])
		{
			ft_printf("c == %i|(%c)", i, c[0]);
		}
		i++;
	}*/
	return (0);
}
