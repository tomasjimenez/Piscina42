/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yramirez <yramirez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:21:49 by yramirez          #+#    #+#             */
/*   Updated: 2022/02/18 12:24:11 by yramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	dividendo;
	int	divisor;

	dividendo = *a;
	divisor = *b;
	*a = dividendo / divisor;
	*b = dividendo % divisor;
}
