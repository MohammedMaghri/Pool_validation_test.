/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:11:03 by mmaghri           #+#    #+#             */
/*   Updated: 2023/08/28 17:03:49 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i ;
	int	nega ;
	int	num ;

	i = 0 ;
	nega = 1 ;
	num = 0 ;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++ ;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
		{
			nega *= -1 ;
		}
		i++ ;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++ ;
	}
	return (num * nega);
}
