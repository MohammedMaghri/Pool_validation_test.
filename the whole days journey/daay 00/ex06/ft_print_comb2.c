/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:50:12 by mmaghri           #+#    #+#             */
/*   Updated: 2023/08/25 23:25:35 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	paste(char c)
{
	write(1, &c, 1);
}

void	number(char a, char b)
{
	paste((a / 10 + '0'));
	paste((a % 10 + '0'));
	paste(' ');
	paste((b / 10 + '0'));
	paste((b % 10 + '0'));
	if (a < 98)
	{
		paste(',');
		paste(' ');
	}
}

void	ft_print_comb2(void)
{
	char	a ;
	char	b ;

	a = 0 ;
	while (a <= 98)
	{
		b = a + 1 ;
		while (b <= 99)
		{
			number(a, b);
			b++;
		}
		a++;
	}
}
