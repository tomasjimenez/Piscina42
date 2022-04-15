/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:42:39 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 22:23:41 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	show_square(void);
void	square_data(void);
void	first_row(int n);
void	first_row(int n);
void	function_4_1(int i, int j, int k);
void	function_2_1(int i, int j, int k);
void	function_2_2(int i, int j, int k);
void	function_2_3(int i, int j, int k);
void	function_3_1(int i, int j, int k);
void	function_3_2(int i, int j, int k);
void	function_1_2(int i, int j, int k);
void	function_1_3(int i, int j, int k);
void	function_1_4(int i, int j, int k);
void	error(void);
void	save(int i, int j, int k, int square);
void	write_1(int n);
void	second_col(int n, int square);
void	second_row(int n, int square);
void	into_data(int n);

static int	g_n[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

int	main(void)
{
	int*	square;
	int*	n;

	printf("Arrea, hace algo");
	square = malloc((4 * 4) * sizeof(int));
	n = malloc((16) * sizeof(int));
	printf("Arrea, hace algo");
	square_data();
	into_data(*g_n);
	first_row(*g_n);
	first_row(*g_n);
	second_col(*g_n, *square);
	second_row(*g_n, *square);
	show_square();
	free(square);
	free(n);
	return (0);
}

void	error(void)
{
	write(1, "Error\n", 7);
	exit(-1);
}
