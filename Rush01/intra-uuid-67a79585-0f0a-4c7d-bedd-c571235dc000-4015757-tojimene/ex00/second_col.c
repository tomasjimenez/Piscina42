/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_col.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:28:56 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 22:13:30 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	save(int i, int j, int k);

void	second_col(int *n, int **square)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		if (n[j] == 3 && n[j + 4] == 2)
		{
			if (square[i][j] == 2 && square[i + 2][j] == 4)
			{
				save(i + 1, j, 3);
				save(i + 3, j, 1);
			}
		}
		else if (n[j] == 2 && n[j + 4] == 3)
		{
			if (square[i + 3][j] == 2 && square[i + 1][j] == 4)
			{
				save(i + 2, j, 3);
				save(i, j, 1);
			}
		}
		else if (n[j] == 2 && n[j + 4] == 2)
		{
			if (square[i + 3][j] == 3 && square[i + 2][j] == 4)
			{
				save(i + 1, j, 1);
				save(i, j, 2);
			}
			if (square[i + 1][j] == 4 && square[i][j] == 3)
			{
				save(i + 2, j, 1);
				save(i + 3, j, 2);
			}
		}
		j++;
	}
}
