/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipollo <mcipollo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:02:18 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/08 14:02:22 by mcipollo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*ptr;
	int		i;

	size = ft_strlen(src);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (src[i] != 0)
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "First use of malloc";

	printf("%s", ft_strdup(str));
}
*/
/*
The strdup() function allocates sufficient memory for a copy of the
string s1, does the copy, and returns a pointer to it.
The pointer may subsequently be used as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to
ENOMEM.

The strndup() function copies at most n characters from the string s1
always NUL terminating the copied string.
*/
