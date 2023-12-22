/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:24:13 by mmaghri           #+#    #+#             */
/*   Updated: 2023/09/02 16:25:21 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ppow(int nb, int power)
{
	int	res;

	while (!power)
	{
		return (1);
	}
	while (power < 0)
	{
		return (0);
	}
	res = nb * ppow(nb, power - 1);
	return (res); 
}

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1 ;
	if (nb > 0)
	{
		while (sqr <= 46360)
		{
			if (ppow(sqr, 2) == nb)
				return (sqr);
			sqr++ ;
		}
	}
	return (0);
}
