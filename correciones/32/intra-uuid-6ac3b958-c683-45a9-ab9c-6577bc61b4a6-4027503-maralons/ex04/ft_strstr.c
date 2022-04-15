/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:01:46 by maralons          #+#    #+#             */
/*   Updated: 2022/02/17 18:01:48 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	iniciar(int *i, int *j)
{
	*i = 0;
	*j = 0;
}

void	sumar(int *i, int *j)
{
	(*i)++;
	(*j)++;
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	iniciar(&i, &j);
	if (to_find[0] == 0)
		return (str);
	while (str[j] != 0)
	{	
		k = 0;
		if (to_find[0] == str[j])
		{
			i = j;
			while (to_find[k] != 0 && to_find[k] == str[i])
			{
				if (to_find[k + 1] == '\0')
					return (&str[j]);
				sumar(&i, &k);
			}
		}
		j++;
	}
	return (0);
}
