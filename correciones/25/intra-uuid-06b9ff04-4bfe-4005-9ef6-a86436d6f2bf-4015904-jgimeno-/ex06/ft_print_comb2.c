/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgimeno- <jgimeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:09:42 by jgimeno-          #+#    #+#             */
/*   Updated: 2022/02/16 18:55:24 by jgimeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pareja(int i)
{
	int	u;
	int	d;

	u = ((i % 10) + 48);
	d = ((i / 10) + 48);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			pareja(x);
			write(1, " ", 1);
			pareja(y);
			if (x < 98 && y <= 99)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
