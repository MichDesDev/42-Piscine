/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipollo <mcipollo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:13:25 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/24 15:14:24 by mcipollo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = '2';
	y = '3';
	a = &x;
	b = &y;
	ft_swap(a, b);
	write(1, &x, 1);
	write(1, &y, 1);
}*/
