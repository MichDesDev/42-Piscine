/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:19:31 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/05 09:46:04 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a function that returns 1 if the number
given as a parameter is a prime
number, and 0 if it isn’t.
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 5, ft_is_prime(5));
    printf("%d -> %d\n", 6, ft_is_prime(6));
    printf("%d -> %d\n", 11, ft_is_prime(11));
    printf("%d -> %d\n", 12, ft_is_prime(12));
	printf("%d -> %d\n", 7853, ft_is_prime(7853));
    printf("%d -> %d\n", 311275, ft_is_prime(311275));
	printf("%d -> %d\n", 79859, ft_is_prime(79859));
	printf("%d -> %d\n", 347127, ft_is_prime(347127));
	printf("%d -> %d\n", 72191, ft_is_prime(72191));
	return (0);
}
*/
