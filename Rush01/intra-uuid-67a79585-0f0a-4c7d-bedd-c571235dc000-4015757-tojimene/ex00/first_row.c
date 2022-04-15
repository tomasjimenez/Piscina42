/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:21:50 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 19:23:23 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	funcion_4_1(int i, int j, int k);
void	funcion_2_1(int i, int j, int k);
void	funcion_2_2(int i, int j, int k);
void	funcion_2_3(int i, int j, int k);
void	funcion_3_1(int i, int j, int k);
void	funcion_3_2(int i, int j, int k);
void	funcion_1_2(int i, int j, int k);
void	funcion_1_3(int i, int j, int k);
void	funcion_1_4(int i, int j, int k);

void	first_row(int *n)
{
	int	i;
	int	y;

	i = 0;
	y = 7;
	while (++y < 12)
	{
		if (n[y] == 4 && n[y + 4] == 1)
			funcion_4_1(i, 0, 1);
		else if (n[y] == 3 && n[y + 4] == 1)
			funcion_3_1(i, 0, 1);
		else if (n[y] == 3 && n[y + 4] == 2)
			funcion_3_2(i, 0, 1);
		else if (n[y] == 2 && n[y + 4] == 1)
			funcion_2_1(i, 0, 1);
		else if (n[y] == 2 && n[y + 4] == 3)
			funcion_2_3(i, 0, 1);
		else if (n[y] == 1 && n[y + 4] == 2)
			funcion_1_2(i, 0, 1);
		else if (n[y] == 1 && n[y + 4] == 3)
			funcion_1_3(i, 0, 1);
		else if (n[y] == 1 && n[y + 4] == 4)
			funcion_1_4(i, 0, 1);
		i++;
	}
}
