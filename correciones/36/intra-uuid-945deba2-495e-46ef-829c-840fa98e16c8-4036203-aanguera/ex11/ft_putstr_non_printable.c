/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:40:26 by aanguera          #+#    #+#             */
/*   Updated: 2022/03/01 18:38:12 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(unsigned int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c >= 16)
	{
		ft_hexa(c / 16, 1);
		ft_hexa(c % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = (unsigned int)str[i];
			ft_hexa(j, 0);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int	main()
{
	char str[] = "Hola \n \t guapa";
	
	ft_putstr_non_printable(str);
	return(0);
}*/
