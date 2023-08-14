/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:22:37 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/31 13:05:25 by mcipollo         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	n;

	n = 0;
	i = ft_strlen(src);
	while (n < i)
	{
		dest[n] = src[n];
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	n;
	char	src[] = "Hello";
	char	dest[n];
	int	i;

	n = ft_strlen(src);
	ft_strcpy(dest, src);
	i = 0;
	while (dest[i])
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("%s", ft_strcpy);
	
} */
