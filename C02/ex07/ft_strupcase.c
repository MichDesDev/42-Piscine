/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:22:37 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/25 17:26:15 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strupcase(char *str)
{
	int	str_size;
	int	n;

	n = 0;
	str_size = ft_strlen(str);
	while (n < str_size)
	{
		if (!(str[n] > 96 && str[n] < 123))
		{
			n++;
		}
		else
		{
			str[n] = str[n] - 32;
			n++;
		}
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	name[] = "Some1 is noT Lowercase!";
	printf("%s", ft_strupcase(name));
	return (0);
}
*/
