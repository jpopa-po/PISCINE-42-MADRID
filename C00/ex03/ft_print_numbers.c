/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:26:17 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/13 07:47:02 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	while (num < 58)
	{
		write (1, &num, 1);
		num++;
	}
}
