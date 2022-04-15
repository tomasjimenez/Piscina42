/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yramirez <yramirez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:00:11 by yramirez          #+#    #+#             */
/*   Updated: 2022/02/16 19:27:14 by yramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int	*b)
{
	int	temp1;

	temp1 = *a;
	*a = *b;
	*b = temp1;
}
