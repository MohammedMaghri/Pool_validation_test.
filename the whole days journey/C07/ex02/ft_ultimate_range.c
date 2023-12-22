/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:20:57 by mmaghri           #+#    #+#             */
/*   Updated: 2023/09/04 19:49:36 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	len(int min, int max)
{
	int	i;

	i = 0 ;
	while (min < max)
	{
		min++ ;
		i++ ;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	lenght;
	int	index;

	lenght = len(min, max);
	*range = (int *)malloc(sizeof(int) * lenght);
	if (min >= max)
	{
		*range = NULL ;
		return (0);
	}
	index = 0 ;
	while (min < max)
	{
		range[0][index] = min;
		min++;
		index++;
	}
	return (lenght); 
}
