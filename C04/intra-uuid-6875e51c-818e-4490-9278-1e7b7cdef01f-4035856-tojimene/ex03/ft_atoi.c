/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:56:17 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/02 16:15:14 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	j;

	n = 0;
	i = 0;
	j = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -j;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * j);
}
//int	main(int ac, char **av)
//{
//	if(ac == 2)
//	{
//	ft_atoi(av[1]);
//	printf("%d", ft_atoi(av[1]));
//	//printf("%d", atoi(str));
//	}
//}
