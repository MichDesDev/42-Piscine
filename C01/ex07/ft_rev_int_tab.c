/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:10:35 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/25 12:17:45 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (size > i)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		size--;
		i++;
	}
}

int	arr_length(int *array)
{
	int	length;

	length = (*(&array + 1) - array)/2;
	return (length);
}

int main(void)
{
    int i;
    int arr[] = {0, 1, 2, 3, 4};
	int size;

    size = arr_length(arr);
	printf("size of arr: %i \n", size);
    //ft_rev_int_tab(arr, 4); //4
    //printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
}
