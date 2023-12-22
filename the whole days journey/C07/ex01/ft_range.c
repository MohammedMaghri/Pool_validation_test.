/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:34:19 by mmaghri           #+#    #+#             */
/*   Updated: 2023/09/04 22:29:34 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	len(int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		min++ ;
		i++ ;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	lenght ;
	int	*copy ;
	int	i ;

	i = 0 ;
	lenght = len(min, max);
	copy = (int *)malloc(sizeof(int) * lenght);
	if (min >= max)
	{
		copy = NULL ;
		return (copy);
	}
	if (!copy)
	{
		return (NULL);
	}
	lenght = 0 ;
	while (min < max)
	{
		copy[lenght] = min ;
		min++ ;
		lenght++ ;
	}
	copy[lenght] = '\0' ;
	return (copy);
}
