/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipollo <mcipollo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:52:22 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/07 20:52:24 by mcipollo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its own name followed by a new line.
*/
#include <unistd.h>

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print(argv[0]);
	return (0);
}
