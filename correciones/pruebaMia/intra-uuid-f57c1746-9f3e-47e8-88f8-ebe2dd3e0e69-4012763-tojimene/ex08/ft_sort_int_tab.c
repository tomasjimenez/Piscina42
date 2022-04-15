/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:02:50 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/20 21:14:03 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		if (tab[i] > tab[j])
		{
			ft_swap(&tab[i], &tab[j]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
//int	main(void)
//{
//	int a[6] = {-8, 7, -2, 1, 4, 6};
//	int size = 6;
//	ft_sort_int_tab(a, size);
//	for(int i = 0; i < size; i++)
//	{
//		printf("%d", a[i]);
//	}	
//}
