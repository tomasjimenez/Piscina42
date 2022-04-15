/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 02:34:35 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/20 03:46:10 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resultado;
	int	resultadodos;

	resultado = *a / *b;
	resultadodos = *a % *b;
	*a = resultado;
	*b = resultadodos;
}
//int	main(void)
//{
//	int a;
//	int b;
//	a = 5;
//	b = 2	
//	printf("%d, %d", a, b);
//	ft_ultimate_div_mod(&a, &b);
//	printf("%d, %d", a, b);
//}
