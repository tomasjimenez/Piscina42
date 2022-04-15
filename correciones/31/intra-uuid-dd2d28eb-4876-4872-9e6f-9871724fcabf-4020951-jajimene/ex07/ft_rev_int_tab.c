/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:04:41 by jajimene          #+#    #+#             */
/*   Updated: 2022/02/22 21:46:25 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*newpt;
	int	stop;

	stop = size / 2;
	newpt = &tab[size -1];
	while (stop > 0)
	{
		ft_swap(newpt, tab);
		newpt--;
		tab++;
		stop--;
	}
}
int main(void)
{
	char	c;
	int	arr[5] = {1, 2, 3, 4, 5};

	printf("%d, %d, %d, %d, %d | ", arr [0], arr [1], arr [2], arr [3], arr [4]);
	ft_rev_int_tab(&arr[0], 5);
	printf("%d, %d, %d, %d, %d", arr [0], arr [1], arr [2], arr [3], arr [4]);
	return (0);
}
