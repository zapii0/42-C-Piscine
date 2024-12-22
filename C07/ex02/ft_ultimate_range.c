/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:04:58 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/22 05:50:53 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	size;
	int			i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * 4);
	if (*range == 0)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
