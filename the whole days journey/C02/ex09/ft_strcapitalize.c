/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:06:41 by mmaghri           #+#    #+#             */
/*   Updated: 2023/08/26 13:01:31 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*upper(char *str)
{
	int	i ;

	i = 0 ;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32 ;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i ;
	int	track ;

	i = 0 ;
	track = 1 ;
	upper(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (track == 1)
			{
				str[i] -= 32 ;
			}
			track = 0 ;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			track = 0 ;
		else
		{
			track = 1 ;
		}
		i++;
	}
	return (str);
}
