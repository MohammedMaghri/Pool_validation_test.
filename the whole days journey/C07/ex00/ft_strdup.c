/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:18:29 by mmaghri           #+#    #+#             */
/*   Updated: 2023/09/04 18:54:13 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	len(char *src)
{
	int	i;

	i = 0 ;
	while (src[i])
	{
		i++ ;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		lenght;
	int		i;	

	lenght = len(src);
	i = 0 ;
	copy = (char *)malloc(sizeof(char) * lenght);
	lenght = 0 ;
	while (src[lenght])
	{
		copy[lenght] = src[lenght];
		lenght++ ;
	}
	copy[lenght] = '\0';
	return (copy);
}
