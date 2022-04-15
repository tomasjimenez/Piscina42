/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_col.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:20:57 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 19:23:51 by fraalmei         ###   ########.fr       */
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

void	first_col(int *n)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (n[j] == 4 && n[j + 4] == 1)
			funcion_4_1(0, j, 0);
		else if (n[j] == 3 && n[j + 4] == 1)
			funcion_3_1(0, j, 0);
		else if (n[j] == 3 && n[j + 4] == 2)
			funcion_3_2(0, j, 0);
		else if (n[j] == 2 && n[j + 4] == 1)
			funcion_2_1(0, j, 0);
		else if (n[j] == 2 && n[j + 4] == 3)
			funcion_2_3(0, j, 0);
		else if (n[j] == 1 && n[j + 4] == 2)
			funcion_1_2(0, j, 0);
		else if (n[j] == 1 && n[j + 4] == 3)
			funcion_1_3(0, j, 0);
		else if (n[j] == 1 && n[j + 4] == 4)
			funcion_1_4(0, j, 0);
		j++;
	}
}
