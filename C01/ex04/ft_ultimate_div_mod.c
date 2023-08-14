/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipollo <mcipollo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:50:52 by mcipollo          #+#    #+#             */
/*   Updated: 2023/07/24 15:30:25 by mcipollo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int main(void)
{
    int x;
    int y;
    int *a;
    int *b;

    x = 42;
    y = 10;
    a = &x;
    b = &y;
    ft_ultimate_div_mod(a, b);
    printf("this is the div: %d\n", *a);
    printf("this is the mod: %d\n", *b);
}*/
