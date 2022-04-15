/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojimene <tojimene@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:00:12 by tojimene          #+#    #+#             */
/*   Updated: 2022/02/27 13:02:15 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_atoi(char *str);
int				ft_strlen(char *str);
int				powe(int base, int power);

unsigned int	ft_atoi(char *str)
{
	int				size;
	int				i;
	unsigned int	output;

	size = ft_strlen(str);
	i = 0;
	output = 0;
	while (i < size)
	{
		output += (str[size - i - 1] - '0') * powe(10, i);
		i++;
	}
	return (output);
}
/*
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
	return (result);
}	
*/
