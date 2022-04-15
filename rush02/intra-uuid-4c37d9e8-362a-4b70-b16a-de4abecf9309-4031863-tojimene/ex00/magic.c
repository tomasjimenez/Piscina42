/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 04:24:14 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/27 23:10:11 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int				magic(char *str, unsigned int nb);
unsigned int	*insert_arr(unsigned int nb, int size);
char			*get_key(char *dict, unsigned int n);
int				tf_uintsize(unsigned int n);
int				size_arr(unsigned int nb);
void			print_value(char *key);

/* returns 0 if it finds all keys, otherwise 1 */
int	magic(char *str, unsigned int nb)
{
	unsigned int	*deco_nb;
	int				size_nb;
	char			*key;
	int				size;

	size = tf_uintsize(nb);
	deco_nb = insert_arr(nb, size);
	size_nb = *deco_nb;
	while (size_nb > 0)
	{
		key = get_key(str, *deco_nb);
		if (!key)
			return (1);
		print_value(key);
		if (size_nb > 1)
			write(1, " ", 1);
		/* free(key); */
		deco_nb++;
		size_nb--;
	}
	write(1, "\n", 1);
	return (0);
}
