/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:27:29 by aanguera          #+#    #+#             */
/*   Updated: 2022/03/01 17:05:44 by aanguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncopy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && str[i] != '0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	
	return (dest);
}

/*#include<stdio.h>
int main()
{
	char dest[30];
	char src[] = "Lore ipsum";

	printf("%s\n", ft_strncopy(dest, src, 15));
}*/
