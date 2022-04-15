/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:17:11 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 19:19:09 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void);
void	error(void);

void	save(int i, int j, int k, int **square)
{
	if (square[i][j] == 0 || square[i][j] == k)
		square[i][j] = k;
	else
		error();
}
