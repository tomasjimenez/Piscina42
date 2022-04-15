/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 22:19:07 by jajimene          #+#    #+#             */
/*   Updated: 2022/02/22 21:43:12 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	y;

	y = *a;
	*a = *a / *b;
	*b = y % *b;
}
int main (void)
{
	int a;
	int b;

	a = 24;
	b = 5;
	ft_ultimate_div_mod(&a,& b);
	printf("%d\n%d", a, b);
	return (0);
}
