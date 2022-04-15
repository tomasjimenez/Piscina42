/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:19:38 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 19:34:02 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_1(int n);

void	show_square(int **square)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if ((j + 1) % 4 == 0)
			{
				write_1(square[i][j]);
				write(1, "\n", 1);
			}
			else
				write_1(square[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
}
