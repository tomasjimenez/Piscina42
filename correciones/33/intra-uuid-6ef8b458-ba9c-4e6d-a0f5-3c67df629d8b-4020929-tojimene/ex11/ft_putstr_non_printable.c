/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:44:19 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/27 20:08:56 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_transform(int c)
{
	char	*cont;
	int		x;

	cont = "0123456789abcdef";
	x = c / 16;
	write (1, "\\", 1);
	write (1, &cont[x], 1);
	x = c % 16;
	write (1, &cont[x], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	treat_char;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 0)
			treat_char = 256 + str[i];
		else
			treat_char = str[i];
		if (treat_char < 32 || treat_char >= 127)
		{
			ft_transform(treat_char);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
//int main(void)
//{
//	char str[] = "Coucou\ttu vas bien ?";
//	ft_putstr_non_printable(str);
//}
