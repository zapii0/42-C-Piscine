/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 00:32:57 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/22 05:48:24 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(*dest) * (i + 1));
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
