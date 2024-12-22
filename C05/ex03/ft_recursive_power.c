/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 07:10:45 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/13 07:11:30 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
