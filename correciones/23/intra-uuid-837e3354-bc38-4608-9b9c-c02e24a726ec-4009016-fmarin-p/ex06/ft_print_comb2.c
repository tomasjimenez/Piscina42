/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:50:47 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/02/15 12:15:29 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int x)
{
	int	u;
	int	d;

	u = '0' + (x % 10);
	d = '0' + (x / 10);
	ft_putchar(d);
	ft_putchar(u);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a);
			ft_putchar(' ');
			ft_print(b);
			if (a < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		++b;
		}
	++a;
	}
}
