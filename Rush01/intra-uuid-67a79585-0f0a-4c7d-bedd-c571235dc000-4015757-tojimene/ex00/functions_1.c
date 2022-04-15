/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:25:08 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 21:34:55 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	save(int i, int j, int k);

void	funcion_1_2(int i, int j, int k)
{
	if (k == 0)
	{
		save(i, j, 3);
		save(i + 3, j, 4);
	}
	else if (k == 1)
	{
		save(i, j + 3, 3);
		save(i, j, 4);
	}
}

void	funcion_1_3(int i, int j, int k)
{
	if (k == 0)
	{
		save(i + 3, j, 2);
		save(i, j, 4);
	}
	else if (k == 1)
	{
		save(i, j + 3, 2);
		save(i, j, 4);
	}
}

void	funcion_1_4(int i, int j, int k)
{
	int	x;

	x = 4;
	if (k == 0)
	{
		while (i < 4)
		{
			save(i, j, x);
			x--;
			i++;
		}
	}
	else if (k == 1)
	{
		while (j < 4)
		{
			save(i, j, x);
			x--;
			j++;
		}
	}
}
