/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:17:08 by mmaghri           #+#    #+#             */
/*   Updated: 2023/09/05 16:08:06 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp ;

	temp = *a ;
	*a = *b ;
	*b = temp ;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i ;

	i = 0 ;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap(&tab[i], &tab[i + 1]);
			i = 0 ;
		}
		else	
			i++ ;
	}
}


