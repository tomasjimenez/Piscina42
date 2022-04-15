/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:56:32 by aanguera          #+#    #+#             */
/*   Updated: 2022/02/28 19:45:36 by aanguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_alphanum(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (2);
	else if (str >= '0' && str <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (ft_alphanum(str[i]) == 2)
			str[i] += 32;
		if (ft_alphanum(str[i]) == 1 && ft_alphanum(str[i - 1]) == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include<stdio.h>
int	main()
{
	char str[] = "aLVARO69ES INCREIBE-DIOS/COMO+MOLA";
	
	printf("%s\n", ft_strcapitalize(str));
}*/
