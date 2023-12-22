/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:52:16 by mmaghri           #+#    #+#             */
/*   Updated: 2023/08/28 17:11:25 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	paste(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		paste('-');
		ft_putnbr(nb *= -1);
	}
	else if (nb < 10)
	{
		paste(nb + '0');
	}
	else 
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
