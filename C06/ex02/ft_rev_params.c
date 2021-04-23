/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:56:58 by jsolano-          #+#    #+#             */
/*   Updated: 2021/04/23 12:05:04 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char *argv[])
{
	while (--argc > 0)
		ft_putstr(argv[argc]);
}
