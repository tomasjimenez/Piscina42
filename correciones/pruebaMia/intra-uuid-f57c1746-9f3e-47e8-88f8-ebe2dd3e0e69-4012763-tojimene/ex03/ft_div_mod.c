/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:57:38 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/20 03:28:31 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//int main(void)
//{
//	int a;
//	int b;
//	int div;
//	int mod;
//	a = 5;
//	b = 5;
//	ft_div_mod(a, b, &div, &mod);
//	printf("%i, %i", div, mod);
}
