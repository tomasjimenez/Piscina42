/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 03:46:56 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/20 03:52:59 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
//int main(void)
//{
//	ft_putstr("hola");
//	return(0);
//}
