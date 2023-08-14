/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:19:43 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/07 20:40:53 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a function that returns the next prime number
greater or equal to the number
given as argument.
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>

int main (void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 10, ft_find_next_prime(10));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
    printf("%d -> %d\n", 7854, ft_find_next_prime(7854));
	printf("%d -> %d\n", 5, ft_find_next_prime(5));
    printf("%d -> %d\n", 6, ft_find_next_prime(6));
    return (0);
}
*/
