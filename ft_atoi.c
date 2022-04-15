/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:00:12 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/26 19:54:06 by tojimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const	char *str)
{
	int i;
	int	n;
	int	result;

	i = 0;
	n = 0;
	result = 0;

	while (i <= 32)
	{
		i++;
	}
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * n);
}	
