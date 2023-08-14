/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:50:00 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/31 19:54:25 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (src[n] != '\0' && n < nb)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[] = "Mich";
	char src[] = "ele";
	unsigned int nb;

	nb = 2;
	printf("%s \n", src);
	printf("%s \n", dest);
	//printf("string.h strncat: %s \n", strncat(dest, src, nb));

	printf("ft_strncat: %s \n", ft_strncat(dest, src, nb));

	return (0);
}
*/
