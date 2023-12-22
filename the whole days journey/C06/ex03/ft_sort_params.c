/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:13:59 by mmaghri           #+#    #+#             */
/*   Updated: 2023/09/06 12:32:41 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	icmp(char *src, char *dest)
{
	int	i ;

	i = 0 ;
	while (src[i] && dest[i] && src[i] == dest[i])
	{
		i++;
	}
	return (src[i] - dest[i]);
}

void	put(char *src)
{
	while (*src)
	{
		write(1, src++, 1);
	}
	write(1, "\n", 1);
}

void	sort(int ac, char **argv)
{
	char	*temp ;
	int		i; 

	i = 1 ;
	while (i < ac - 1)
	{
		if (icmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++ ;
	}
}

int	main(int argc, char **argv)
{
	int	i; 

	i = 1;
	sort(argc, argv);
	while (i < argc)
		put(argv[i++]);
}
