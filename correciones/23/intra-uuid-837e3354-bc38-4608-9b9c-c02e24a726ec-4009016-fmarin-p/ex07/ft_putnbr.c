/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:42:42 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/02/16 14:20:02 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(long int nb2)
{
	int			digit;
	char		digitp;

	while (nb2 > 0)
	{
		digit = nb2 % 10;
		digitp = 48 + digit;
		write (1, &digitp, 1);
		nb2 = nb2 / 10;
	}
}

void	ft_putnbr(int nb)
{
	long int	nb2;
	int			digitrev;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	nb2 = 0;
	while (nb > 0)
	{
		digitrev = nb % 10;
		nb2 = nb2 * 10 + digitrev;
		nb = nb / 10;
	}
	ft_printnbr(nb2);
}

 int main(void)
  {
      ft_putnbr(234);
      return(0);
  }

