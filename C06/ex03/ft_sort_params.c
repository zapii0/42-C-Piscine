/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:36:57 by mzapora           #+#    #+#             */
/*   Updated: 2024/10/17 05:43:17 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *argv)
{
	while (*argv)
		write(1, argv++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

int	ft_sort(int argc, char **argv)
{
	int		i;
	int		flag;
	char	*tmp;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i +1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				flag = 1;
			}
			i++;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
	{
		ft_putchar(argv[i]);
		i++;
	}
	return (0);
}
