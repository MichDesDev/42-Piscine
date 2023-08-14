/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:26:13 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/10 18:42:28 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that will concatenate all
the strings pointed by strs separated by
sep.
• size is the number of strings in strs
• if size is 0, you must return an empty
string that you can free().
• Here’s how it should be prototyped :
*/
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

int	tot_size(char **strs, char *sep, int size)
{
	int	tot;
	int	i;

	i = 0;
	tot = 0;
	while (i < size)
	{
		tot += ft_strlen(strs[i]);
		i++;
	}
	tot += ft_strlen(sep) * (size -1);
	return (tot);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*just_do_it(int size, char**strs, char *sep)
{
	char	*ptr;
	int		i;
	int		z;

	i = 0;
	z = 0;
	ptr = (char *)malloc(size * sizeof(char));
	while (i < size)
	{
		ft_strcpy(ptr + z, strs[i]);
		z += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr + z, sep);
			z += ft_strlen(sep);
		}
		i++;
	}
	ptr[z] = '\0';
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		tot_len;

	if (size <= 0)
		return ((char *)malloc(1));
	tot_len = tot_size(strs, sep, size);
	ptr = (char *)malloc(sizeof(char) * tot_len + 1);
	if (!ptr)
		return (0);
	ptr = just_do_it(size, strs, sep);
	return (ptr);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"some", "other", "stuff"};
	char	sep[] = "~&&~";
	char	*ptr;
	int	size = 3;
	ptr = ft_strjoin(size, strs, sep);
	printf("%s", ptr);
	return (0);
}
*/
