/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:36:22 by xtorres-          #+#    #+#             */
/*   Updated: 2022/02/26 18:32:16 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_input(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		i++;
	}
	if (i > 10)
		return (-1);
	return (1);
}

#include <stdio.h>
int	main()
{
	char *str = "1234567890";
	printf("%d", validate_input(str));
}
