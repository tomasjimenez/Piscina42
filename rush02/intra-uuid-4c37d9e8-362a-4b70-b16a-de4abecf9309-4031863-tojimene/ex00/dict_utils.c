/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:13:19 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/27 23:11:51 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*get_key(char *dict, unsigned int n);
void	print_value(char *key);
char	*get_value(char *key);
char	*magic_strnstr(char *haystack, char *needle, int len);
int		magic_strncmp(char *dst, char *src, int len);
char	*tf_utoa(unsigned int n);	
int		ft_strlen(char *str);

/* RETURNS char *key of first address of key, NULL if not found. */
/* TODO at the moment it will find 50 when looking for 5, etc. FIX! */
char	*get_key(char *dict, unsigned int n)
{
	char	*str_int;
	int		size_int_str;
	char	*key;

	str_int = tf_utoa(n);
	size_int_str = ft_strlen(str_int);
	key = magic_strnstr(dict, str_int, size_int_str);
	if (key == str_int)
		*key = '\0';
	return (key);
}	

void	print_value(char *key)
{
	while (*key != ':')
		key++;
	key += 2;
	while (*key == ' ')
		key++;
	while (*key != '\n')
	{
		write(1, key, 1);
		key++;
	}
}

/* RETURNS first address of value in dict given key. */
char	*get_value(char *key)
{
	while (*key != ':')
		key++;
	key += 2;
	while (*key == ' ')
		key++;
	return (key);
}
