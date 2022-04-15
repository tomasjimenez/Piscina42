/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 21:32:23 by tojimene          #+#    #+#             */
/*   Updated: 2022/03/01 12:07:09 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*tmp;

	tmp = str;
	if (*to_find == '\0')
		return (str);
	while (*tmp)
	{
		i = 0;
		if (*tmp == to_find[0])
		{
			while (tmp[i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (tmp);
		}
		tmp++;
	}
	return (0);
}
//int main(void)
//{
//	char str[80] = "holapepe";
//	char to_find[80] = "ap";
//	printf("%s", ft_strstr(str, to_find));
//	printf("%s", strstr(str, to_find));
//	return(0);
//}
