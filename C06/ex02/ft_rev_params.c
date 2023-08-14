/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipollo <mcipollo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:53:40 by mcipollo          #+#    #+#             */
/*   Updated: 2023/08/07 20:53:42 by mcipollo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its given arguments.
• One per line, in the reverse order of the command line.
• It should display all arguments, except for argv[0]
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
	int	count;

	count = argc - 1;
	while (count > 0)
	{
		while (argv[count])
		{
			if (count == 0)
				break ;
			ft_print(argv[count]);
			count--;
		}
	}
	return (0);
}
