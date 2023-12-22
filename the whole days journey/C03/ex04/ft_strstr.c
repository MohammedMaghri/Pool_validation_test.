/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:35:47 by mmaghri           #+#    #+#             */
/*   Updated: 2023/08/30 11:56:21 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	ind ;
	int	fd ;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	ind = 0 ;
	while (str[ind])
	{
		fd = 0 ;
		while (str[ind + fd] == to_find[fd])
		{
			if (to_find[fd + 1] == '\0')
				return (str + ind);
			else 
				fd++ ;
		}
		ind++ ;
	}
	return (NULL);
}
