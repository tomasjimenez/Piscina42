/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:26:20 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 21:34:56 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	save(int i, int j, int k);

void	funcion_3_1(int i, int j, int k)
{
	if (k == 0)
	{
		save(i, j, 2);
		save(i + 3, j, 4);
	}
	else if (k == 1)
	{
		save(i, j, 2);
		save(i, j + 3, 4);
	}
}

void	funcion_3_2(int i, int j, int k)
{
	if (k == 0)
		save(i + 2, j, 4);
	else if (k == 1)
		save(i, j + 2, 4);
}
