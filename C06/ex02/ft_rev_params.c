/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:06:25 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/17 02:08:51 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc -1;
	while (i > 0)
		ft_putstr(argv[i--]);
	return (0);
}
