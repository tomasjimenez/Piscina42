/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_from_dic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:30:41 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/27 23:19:28 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER_SIZE 8192

int				write_from_dic(char *path, char *n);
unsigned int	ft_atoi(char *str);
int				magic(char *str, unsigned int nb);

int	write_from_dic(char *path, char *n)
{
	unsigned int	nb;
	int				fd;
	char			*buffer;
	int				size_file;
	int				error;

	buffer = malloc(BUFFER_SIZE);
	nb = ft_atoi(n);
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (fd);
	size_file = read(fd, buffer, BUFFER_SIZE);
	close(fd);
	if (size_file == -1)
		return (size_file);
	buffer[size_file] = '\0';
	error = magic(buffer, nb);
	free(buffer);
	if (error != 0)
		return (1);
	return (0);
}
