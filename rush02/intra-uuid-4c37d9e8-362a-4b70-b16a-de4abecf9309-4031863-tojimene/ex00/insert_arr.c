/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_arr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:34:34 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/27 23:02:41 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	powe(int base, int power);

unsigned int	*insert_arr(unsigned int nb, int size)
{
	unsigned int	*uint_arr;
	int				len_uint_arr;

	len_uint_arr = 0;
	uint_arr = malloc((size * 2 + 1) * sizeof(int));
	while (size > 0)
	{
		if (nb / size != 0)
		{
			*uint_arr = nb / powe(10, size - 1);
			uint_arr++;
			*uint_arr = powe(10, size - 1);
			uint_arr++;
			len_uint_arr += 2;
		}
		size--;
	}
	uint_arr[0] = len_uint_arr;
	return (uint_arr);
}
		/* if (n / size - uint_arr[i]) */
			/* uint_arr[i] = n[i]; */
		/* else if (10 * size - 1) */
			/* uint_arr[i] = n[i + 1]; */
		/* i++; */
/*
int	main(void)
{
	unsigned int n;
	unsigned int uint_arr[];
	int size;
	size = 3;

	n = 932;
	insert_arr(n, size);
	printf("%d", uint_arr);
	return(0);
}
*/
