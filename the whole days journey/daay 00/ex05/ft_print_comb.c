/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:44:56 by mmaghri           #+#    #+#             */
/*   Updated: 2023/08/18 10:29:28 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	paste_content(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	x ;
	char	y ;
	char	z ;

	x = '0' ;
	while (x <= '7')
	{
		y = x + 1 ;
		while (y <= '8')
		{
			z = y + 1 ;
			while (z <= '9')
			{
				paste_content(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
