/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_row.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:30:48 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 22:13:41 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void);
void	save(int i, int j, int k);

void	second_row(int *n, int **square)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 8;
	while (k < 12)
	{
		if (n[k] == 3 && n[k + 4] == 2)
		{
			if (square[i][j] == 2 && square[i][j + 2] == 4)
			{
				save(i, j + 1, 3);
				save(i, j + 3, 1);
			}
		}
		else if (n[k] == 2 && n[k + 4] == 3)
		{
			if (square[i][j + 3] == 2 && square[i][j + 1] == 4)
			{
				save(i, j + 2, 3);
				save(i, j, 1);
			}
		}
		else if (n[k] == 2 && n[k + 4] == 2)
		{
			if (square[i][j + 3] == 3 && square[i][j + 2] == 4)
			{
				save(i, j + 1, 1);
				save(i, j, 2);
			}
			if (square[i + 1][j] == 4 && square[i][j] == 3)
			{
				save(i, j + 2, 1);
				save(i, j + 3, 2);
			}
		}
		k++;
		i++;
	}
}
