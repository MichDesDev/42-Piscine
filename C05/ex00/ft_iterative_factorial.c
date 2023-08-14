/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:17:34 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/05 10:01:00 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create an iterated function that returns a number. This number is the result of a
factorial operation based on the number given as a parameter.
• If the argument is not valid the function should return 0.
• Overflows must not be handled, the function return will be undefined.
*/

int	ft_iterative_factorial(int nb)
{
	long	result;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		result = 1;
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}
/*
#include <stdio.h>

int main(void)
{
    int n;
	int n2;
	int n3;

    n = -5;
	n2 = 5;
	n3 = 7;
    printf("%i \n", ft_iterative_factorial(n));
	printf("%i \n", ft_iterative_factorial(n2));
	printf("%i \n", ft_iterative_factorial(n3));
	return (0);
}
*/
