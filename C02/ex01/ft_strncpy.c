/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:24:23 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/08 10:15:14 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
