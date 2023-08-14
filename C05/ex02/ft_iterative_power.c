/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:17:59 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/04 21:31:41 by mcipollo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power > 0)
	{
		while (power > 1)
		{
			res *= nb;
			power--;
		}
		return (res);
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    int nb;
    int power;

    nb = 2;
    power = 0;
    printf("%i", ft_iterative_power(nb, power));
}
*/
