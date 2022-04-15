/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:00:45 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/27 02:45:33 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	validate_input(char *str);
int	write_from_dic(char *path, char *n);	

int	main(int argc, char *argv[])
{
	int	error;

	if (argc < 2 || argc > 3)
		error = 1;
	else if (argc == 2)
		error = validate_input(argv[1]);
	else
		error = validate_input(argv[2]);
	if (error)
	{
		write(1, "error\n", 6);
		return (0);
	}
	if (argc == 2)
		error = write_from_dic("numbers.dict", argv[1]);
	else
		error = write_from_dic(argv[1], argv[2]);
	if (error != 0)
		write(1, "dict error\n", 11);
	return (0);
}
