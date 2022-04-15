/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:28:04 by jajimene          #+#    #+#             */
/*   Updated: 2022/02/22 18:42:38 by jajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main (void)
{
	int *div;
	int *mod;
	int a;
	int b;
	int coc;
	int rest;

	a = 21;
	b = 10;
	div = &coc;
	mod = &rest;
	ft_div_mod(a, b, div, mod);
	printf("%d\n%d", *div, *mod);
	return (0);
}*/
