/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mcipollo <mcipollo@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:50:09 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/07 20:54:51 by  mcipollo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its given arguments.
• One per line, in the same order as in the command line.
• It should display all arguments, except for argv[0].
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
	int	i;

	if (argc >= 1)
	{
		i = 1;
		while (argv[i])
		{
			ft_print(argv[i]);
			i++;
		}
	}
	return (0);
}
