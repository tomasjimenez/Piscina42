/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masanche <masanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:48:54 by masanche          #+#    #+#             */
/*   Updated: 2022/02/13 17:46:53 by jolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	wr_chars(int x, int y, int pos_x, int pos_y);

void	rush(int x, int y)
{
	int	pos_x;
	int	pos_y;

	pos_x = 1;
	pos_y = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Negative Value or 0", 19);
	}
	else
	{
		while (pos_y <= y)
		{
			while (pos_x <= x)
			{
				wr_chars(x, y, pos_x, pos_y);
				pos_x++;
			}
			write(1, "\n", 1);
			pos_y++;
			pos_x = 1;
		}
	}
}

void	wr_chars(int x, int y, int pos_x, int pos_y)
{
	if ((pos_x == 1 && pos_y == 1) || (pos_x == 1 && pos_y == y))
	{
		ft_putchar('A');
	}
	else if ((pos_x == x && pos_y == 1) || (pos_x == x && pos_y == y))
	{
		ft_putchar('C');
	}
	else if ((pos_x == 1 || pos_x == x) && (pos_y != 1 && pos_y < y))
	{
		ft_putchar('B');
	}
	else if ((pos_y == 1 || pos_y == y) && (pos_x != 1 && pos_x < x))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}	
