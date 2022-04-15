/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:36:22 by xtorres-          #+#    #+#             */
/*   Updated: 2022/02/27 12:50:24 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_input(char *str)
{
	int			i;
	int			n;
	char		*maxvalue;

	maxvalue = "4294967295";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (-1);
		i++;
	}
	if (i > 10)
		return (-1);
	else if (i == 10 && str[0] >= 52)
	{
		n = 1;
		while (str[n] != '\0')
		{
			if ((maxvalue[n] - str[n]) < 0)
				return (-1);
			n++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char *str = "4294967295";
	printf("%d", validate_input(str));
}*/
