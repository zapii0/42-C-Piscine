/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:33:05 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/22 06:58:33 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long int	size;
	int			*stor;
	int			*orginal;

	if (min >= max)
		return (0);
	size = max - min;
	stor = (int *)malloc(size * 4);
	orginal = stor;
	if (stor == 0)
		return (0);
	while (min < max)
	{
		*stor = min;
		stor++;
		min++;
	}
	return (orginal);
}
