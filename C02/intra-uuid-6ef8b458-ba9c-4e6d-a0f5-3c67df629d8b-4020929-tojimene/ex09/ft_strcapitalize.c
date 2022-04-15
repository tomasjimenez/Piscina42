/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:24:09 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/27 19:54:07 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i -1] >= 0 && str[i -1] <= 47)
			|| (str[i -1] >= 123 && str[i -1] <= 127)
			|| (str[i -1] >= 58 && str[i -1] <= 64)
			|| (str[i -1] >= 91 && str[i -1] <= 96))
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
//int main(void)
//{
//	char str[61] = "salut, comment tu vas ? 42mots";
//	printf("%s", ft_strcapitalize(str));
//	return(0);
//}
