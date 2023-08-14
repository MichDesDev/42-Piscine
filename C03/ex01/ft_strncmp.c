/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:49:29 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/02 13:49:37 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "ABC";
	char dest[] = "AB";
	unsigned int n;

	n = 9;
	printf("%s \n", src);
	printf("%s \n", dest);
	printf("ft_strcmp: %i \n", ft_strncmp(src, dest, n));
	printf("string.h strcmp: %i \n", strncmp(src, dest, n));

	return (0);
}
*/
