/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:13:35 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/02/16 14:21:16 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_combnincrement(int n, int *tab)
{
	int	i;
	int	tabc[10];

	i = 0;
	while (i < n)
	{
		tabc[i] = i;
		++i;
	}
	i = 2;
	while (i != 0)
	{
		if (tab[n - i] - tabc[n - i] < (10 - n))
		{
			tab[n - i] += 1;
			--i;
			while (i > 0)
			{
				tab[n - i] = tab[n - i - 1] + 1;
				--i;
			}
		}
		else
			++i;
	}
}

void	ft_putcombn(int n, int *tab)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + 48);
		++i;
	}
	if (tab[0] < 10 - n)
		write (1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		++i;
	}
	ft_putcombn(n, tab);
	while (tab[0] != 10 - n)
	{
		if (tab[n - 1] != 9)
			++tab[n - 1];
		else
			ft_combnincrement(n, tab);
		ft_putcombn(n, tab);
	}
}

 int main(void)
  {
      ft_print_combn(5);
      return(0);
  }

