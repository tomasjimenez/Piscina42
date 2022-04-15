/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:50:45 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/01 12:23:10 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && dest[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
//int main(void)
//{
//	char dest[80] = "hola";
//	char src[80] = "pepe";
//	printf("%s",ft_strcat(dest, src));
//	//printf("%s",strcat(dest, src));
//	return(0);
//}
