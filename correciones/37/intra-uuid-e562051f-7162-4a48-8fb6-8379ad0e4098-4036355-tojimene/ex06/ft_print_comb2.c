/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:13:48 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/21 13:42:53 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		write (1, "98 99", 5);
		write(1, "\n", 1);
	}
	else
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, " ", 1);
		write (1, &c, 1);
		write (1, &d, 1);
		write (1, ",", 1);
		write (1, " ", 1);
	}
}

void	ft_print(char a, char b, char c, char d)
{
	int	grupo1;
	int	grupo2;

	while (b <= '9')
	{
		while (c <= '9')
		{
			while (d <= '9')
			{
				grupo1 = (a * 10) + b;
				grupo2 = (c * 10) + d;
				if (grupo1 < grupo2)
				{
					ft_putchar (a, b, c, d);
				}
				d++;
			}
			d = '0';
			c++;
		}
		c = '0';
		b++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a <= '9')
	{
		ft_print(a, b, c, d);
		b = '0';
		a++;
	}
}
// int main(void)
//  {
//      ft_print_comb2();
//      return(0);
// }
