/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:22:37 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/25 20:53:31 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (!(str[j] > 31 && str[j] < 127))
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
	char	string[] = "hello\n";
	int	x;

	x = ft_str_is_printable(string);
	printf("%i", x);
	return (0);
}
*/
