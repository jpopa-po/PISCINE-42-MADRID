/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:04:45 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/23 13:06:13 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

void	ft_putstr(char *str)
{
	int		a;
	char	c;

	a = -1;
	while (str[++a])
		write(1, &str[a], 1);
	c = 10;
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

void	ft_sort_argv(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) < 0)
			{
				aux = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	argv++;
	argc--;
	ft_sort_argv(argc, argv);
	while (--argc >= 0)
		ft_putstr(argv[argc]);
}
