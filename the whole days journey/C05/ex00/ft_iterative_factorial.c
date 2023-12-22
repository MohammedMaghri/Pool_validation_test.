/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:53:05 by mmaghri           #+#    #+#             */
/*   Updated: 2023/09/02 11:14:43 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1 ;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	while (nb)
	{
		res *= nb--; 
	}
	return (res);
}
