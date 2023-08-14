/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipollo <mcipollo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:16:22 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/24 15:19:05 by mcipollo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int    	b;
	int     *div;
	int     *mod;

	a = 42;
	b = 10;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("this is the div: %d\n", *div);
	printf("this is the mod: %d\n", *mod);
}*/
