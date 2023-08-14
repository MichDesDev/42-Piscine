/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:22:37 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/25 14:32:24 by  mcipollo        ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	int	str_size;
	int	i;

	i = 0;
	str_size = ft_strlen(str);
	while (i < str_size)
	{
		if (!(str[i] > 64 && str[i] < 91))
		{
			str[i] = str[i];
			i++;
		}
		else
		{
			str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	name[] = "SOME1 is NOT UPPERCASE!";
	printf("%s", ft_strlowcase(name));
	return (0);
}
*/
