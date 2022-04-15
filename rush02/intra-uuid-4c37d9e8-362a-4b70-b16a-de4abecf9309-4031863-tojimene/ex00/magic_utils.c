/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 04:28:16 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/27 23:14:29 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*magic_strnstr(char *haystack, char *needle, int len);
char	*magic_strncpy(char *dst, char *src, int len);
int		magic_strncmp(char *dst, char *src, int len);
char	*tf_utoa(unsigned int n);
int		tf_uintsize(unsigned int n);
int		powe(int base, int power);

/* 
 * This function checks past the null character of haystack, however, since the
 * buffer thats pointed to by haystack is of a fixed huge size, it won't try to
 * read memory we don't have acces to, in theory. Is it smelly? Yes. Does it 
 * keep the code simple and is only minimally ineficient? Also yes.
 * 
 * RETURNS char *str to found string, or needle if not found.
 */
char	*magic_strnstr(char *haystack, char *needle, int len)
{
	while (*haystack)
	{
		if (magic_strncmp(haystack, needle, len))
			return (haystack);
		haystack++;
	}
	return (needle);
}

/* RETURNS char *dst to LAST address of dst. */
char	*magic_strncpy(char *dst, char *src, int len)
{
	while (len > 0)
	{
		*dst = *src;
		src++;
		dst++;
		len--;
	}
	return (dst);
}

/* RETRUNS 1 if comparison succesfull, 0 if failed. */
int	magic_strncmp(char *dst, char *src, int len)
{
	while (len > 0)
	{
		if (*src != *dst)
			return (0);
		src++;
		dst++;
		len++;
	}
	return (1);
}

/* RETURNS char *str to int. MUST FREE MEMORY WHEN DONE.*/
char	*tf_utoa(unsigned int n)
{
	int		size;
	char	*u;	

	size = tf_uintsize(n);
	u = malloc(size + 1);
	u[size] = '\0';
	while (size > 0)
	{
		*u = n / powe(10, size - 1);
		size--;
	}
	return (u);
}
