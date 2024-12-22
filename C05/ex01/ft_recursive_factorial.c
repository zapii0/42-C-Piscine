/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 05:29:56 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/13 05:30:38 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}
