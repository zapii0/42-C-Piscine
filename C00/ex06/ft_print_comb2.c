/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:16:39 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/14 13:29:13 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_chang(int e, int f);

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	short	b[2];

	b[0] = 0;
	while (b[0] < 99)
	{
		b[1] = b[0] + 1;
		while (b[1] < 100)
		{
			if (b[1] > b[0])
				ft_chang(b[0], b[1]);
			if (b[0] == 98 && b[1] == 99)
				(void)b;
			else
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			b[1]++;
		}
		b[0]++;
	}
}

int	ft_chang(int e, int f)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = e / 10 + '0';
	b = e % 10 + '0';
	c = f / 10 + '0';
	d = f % 10 + '0';
	ft_putchar(a, b, c, d);
	return (0);
}
