/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:32:12 by mmaghri           #+#    #+#             */
/*   Updated: 2023/09/02 11:17:17 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res ;

	res = 1 ;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		res *= nb ;
		power-- ;
	}
	return (res);
}
