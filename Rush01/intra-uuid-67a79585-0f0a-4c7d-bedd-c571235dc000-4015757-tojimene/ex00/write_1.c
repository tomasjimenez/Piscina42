/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:32:59 by fraalmei          #+#    #+#             */
/*   Updated: 2022/02/20 21:34:52 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_1(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
	write(1, " ", 1);
}
