/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:35:57 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/02/16 14:12:47 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	let;

	let = 'z';
	while (let >= 'a')
	{
		write(1, &let, 1);
		--let;
	}
}

 int main(void)
  {
      ft_print_reverse_alphabet();
      return(0);
  }

