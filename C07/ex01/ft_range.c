/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 23:44:18 by marvin            #+#    #+#             */
/*   Updated: 2021/04/23 23:44:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int		main(void)
{
	int		i;
	int		*tab;

	tab = ft_range(100, 121);
	i = 0;
	while (i < 21)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
*/
