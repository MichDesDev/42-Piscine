/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:22:37 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/26 14:47:16 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (!(str[j] > 64 && str[j] < 91))
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
	char	string[] = "REVRerb";
	int	x;

	x = ft_str_is_uppercase(string);
	printf("%i", x);
	return (0);
}
*/
