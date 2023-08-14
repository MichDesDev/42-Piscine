/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:50:17 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/31 18:06:05 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		l = i;
		while (str[l] == to_find[j] && (str[l] != 0 || to_find[j] != 0))
		{
			j++;
			l++;
		}
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//string to be searched
	char str[] = "12345678957";
	//string you're looking for in the string to be searched
	char to_find[] = "57";

	//printf("string.h: %s", strstr(str, to_find));
	printf("ft_strstr: %s", ft_strstr(str, to_find));
}
*/
