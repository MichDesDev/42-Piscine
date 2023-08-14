/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipollo <mcipollo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:02:34 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/08 14:02:36 by mcipollo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	range;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	ptr = (int *)malloc(range * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < range)
		{
			ptr[i] = min + i;
			i++;
		}
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = 5;
	int max = 10;
	int *ptr;

	int range = max - min;
	ptr = ft_range(min, max);
	int i = 0;
	while (i < range)
	{
		printf("%i", ptr[i]);
		i++;
	}
}
*/
/*Create a function ft_range which returns an array of ints.
This int array should contain all values between min and max.
>> Min included - max excluded <<

if min´value is greater or equal to max’s value, a null
pointer should be returned
*/
