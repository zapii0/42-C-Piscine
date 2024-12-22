/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:45:45 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/14 13:30:07 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				ft_putchar(a[0], a[1], a[2]);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
/*int main(void)
{
	ft_print_comb();
	return (0);
}*/
