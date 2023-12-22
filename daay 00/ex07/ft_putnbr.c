/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:08:40 by mmaghri           #+#    #+#             */
/*   Updated: 2023/08/25 23:33:08 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	paste(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr( int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		paste('-');
		nb *= -1 ;
	}
	if (nb < 10)
	{
		paste(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		paste(nb % 10 + '0');
	}
}