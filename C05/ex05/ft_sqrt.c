/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:19:19 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/07 20:39:49 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	left;
	long int	right;
	long int	mid;
	long int	square;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	left = 1;
	right = nb / 2;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		square = mid * mid;
		if (square == nb)
			return ((int)mid);
		else if (square < nb)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}
/*
#include<stdio.h>

int main(void)
{
    printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2147483648));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 36, ft_sqrt(36));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 20286016, ft_sqrt(20286016));
	printf("sqrt of %d is %d\n", 1120795600, ft_sqrt(1120795600));
	printf("sqrt of %d is %d\n", 484440100, ft_sqrt(484440100));
	printf("sqrt of %d is %d\n", 1046643418, ft_sqrt(1046643418));
	printf("sqrt of %d is %d\n", 1944104464, ft_sqrt(1944104464));
	printf("sqrt of %d is %d\n", 231739964, ft_sqrt(231739964));
	printf("sqrt of %d is %d\n", 1454436, ft_sqrt(1454436));
	printf("sqrt of %d is %d\n", 1411303165, ft_sqrt(1411303165));
	printf("sqrt of %d is %d\n", 259564321, ft_sqrt(259564321));
	printf("sqrt of %d is %d\n", 416153106, ft_sqrt(416153106));
    return (0);
}
*/
