/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 23:51:20 by marvin            #+#    #+#             */
/*   Updated: 2021/04/23 23:51:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (!tab)
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (i);
}
/*
int	main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("%d\n", ft_ultimate_range(&range, -1, 10));
	while (i < 11)
	{
		printf ("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
