/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:17:39 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/08 20:55:18 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[b] && b < nb)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
