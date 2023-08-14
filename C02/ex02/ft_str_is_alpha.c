/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:22:37 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/26 14:47:30 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (!((str[j] > 64 && str[j] < 91)
				|| (str[j] > 96 && str[j] < 123)))
		{
			return (0);
		}
		j++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	string[] = "aa0a";
	int	x;

	x = ft_str_is_alpha(string);
	printf("%i", x);
	return (0);
}
*/
