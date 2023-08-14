/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipollo <mcipollo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:23 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/21 19:43:45 by mcipollo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_n(int n)
{
	int	a;
	int	b;

	if (n > 9)
	{
		a = (n / 10) + 48;
		b = (n % 10) + 48;
		write(1, &a, 1);
		write(1, &b, 1);
	}
	else
	{
		a = 48;
		b = n + 48;
		write(1, &a, 1);
		write(1, &b, 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_n(a);
			write(1, " ", 1);
			write_n(b);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			else
			{
				write(1, "", 0);
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
} */
