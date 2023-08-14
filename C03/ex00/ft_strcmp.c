/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:04:49 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/27 14:26:47 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Nomethinl";
	char dest[] = "Something";

	printf("%s \n", src);
	printf("%s \n", dest);
	printf("ft_strcmp: %i \n", ft_strcmp(src, dest));
	printf("string.h strcmp: %i \n", strcmp(src, dest));

	return (0);
}
*/
