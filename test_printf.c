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
	printf("%llD", 666);
	/*ft_printf("res :\t%d\n", ft_printf("{% c}\n", 0));
	ft_printf("res :\t%d\n", printf("{%           c}\n", 0));*/
	//ft_printf("%s%d%p%%%S%D%i%o%O%u%U%x%X%c%C","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
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
