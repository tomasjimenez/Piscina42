/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:58:03 by maralons          #+#    #+#             */
/*   Updated: 2022/02/20 20:58:09 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cuenta;

	cuenta = 0;
	while (*str != 0)
	{
		cuenta++;
		str++;
	}
	return (cuenta);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = size;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (dest[i])
	{
		j--;
		i++;
	}
	while (src[i] && j > 1)
	{
		dest[i] = src[j];
		i++;
		j--;
	}
	dest[i] = '\0';
	if (size < dest_len)
		return (size + src_len);
	return (dest_len + src_len);
}
