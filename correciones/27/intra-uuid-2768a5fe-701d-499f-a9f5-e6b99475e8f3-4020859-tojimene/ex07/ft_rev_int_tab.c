/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 04:09:57 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/20 19:01:22 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
//int main(void)
//{
//	int  a[6]= {1, 2, 3, 4, 5, 6};
//	int size;
//	size = 6;
//	ft_rev_int_tab(a, size);
//	for(int i = 0; i < size; i++)
//	{
//	printf("%d", a[i]);
//	}
//}
