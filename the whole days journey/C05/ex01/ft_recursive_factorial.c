/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:03:37 by mmaghri           #+#    #+#             */
/*   Updated: 2023/09/02 12:36:50 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res ;

	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
