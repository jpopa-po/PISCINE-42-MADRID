/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:19:18 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/26 19:21:47 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;
	int		len;

	len = ft_strlen(src);
	i = 0;
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	while (len--)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					entry;
	struct s_stock_str	*tab;

	entry = 0;
	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	ac = ac + 0;
	if (!tab)
		return (NULL);
	while (entry < ac)
	{
		tab[entry].size = ft_strlen(av[entry]);
		tab[entry].str = av[entry];
		tab[entry].copy = ft_strdup(av[entry]);
		entry++;
	}
	tab[entry] = (struct s_stock_str){0, 0, 0};
	return (tab);
}
/*
int main()
{
	char *pos[3];
	int i = 0;
	pos[0] = "holaa";
	pos[1] = "holiii";
	pos[2] = "woooooo por fiiiiiin";
	t_stock_str *try = ft_strs_to_tab(3, pos);
	while (try[i].str)
	{
		printf("%d, %s, %s\n", try[i].size, try[i].str, try[i].copy);
		i++;
	}
}*/
