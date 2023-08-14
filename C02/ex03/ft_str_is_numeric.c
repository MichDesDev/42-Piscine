/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:22:37 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/26 14:45:51 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (!(str[j] > 47 && str[j] < 58))
		{
			return (0);
		}
		j++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	char	string[] = "35436f67890";
	int	x;

	x = ft_str_is_numeric(string);
	printf("%i", x);
	return (0);
}*/
