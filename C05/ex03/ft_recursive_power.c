/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:18:39 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/05 09:45:06 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a recursive function that returns the value
of a power applied to a number.
• A power lower than 0 returns 0.
• Overflows must not be handled, the function
return will be undefined.
• We’ve decided that 0 power 0 will returns 1
*/
int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		res = res * ft_recursive_power(nb, (power - 1));
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
    int nb;
    int power;

    nb = -2;
    power = 3;
    printf("%i", ft_recursive_power(nb, power));
}
*/
