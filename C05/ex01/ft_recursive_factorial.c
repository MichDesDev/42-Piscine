/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:18:11 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/07 13:20:26 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create an iterated function that returns a number. This number is the result of a
factorial operation based on the number given as a parameter.
• If the argument is not valid the function should return 0.
• Overflows must not be handled, the function return will be undefined.
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int main(void)
{
    int n;

    n = 5;
    printf("%i \n", ft_recursive_factorial(n));
}
*/
