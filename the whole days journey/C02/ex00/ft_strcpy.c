/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:46:35 by mmaghri           #+#    #+#             */
/*   Updated: 2023/08/20 13:04:54 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*r;

	r = dest;
	while (*src)
	{
		*dest = *src ;
		src++;
		dest++;
	}
	*dest = '\0';
	return (r);
}
