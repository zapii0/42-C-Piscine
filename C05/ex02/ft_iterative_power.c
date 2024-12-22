/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 06:44:54 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/13 22:24:20 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 0;
	j = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power - 1)
	{
		i++;
		j = j * nb;
	}
	return (j);
}
