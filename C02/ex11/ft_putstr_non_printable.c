/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:12:19 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/20 17:44:52 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	dechex (int n)
{
	int	hex;
	int	bhex;

	hex = 0;
	if (!n)
		return ;
	else
	{
		bhex = n / 16;
		hex = n % 16;
		dechex (n / 16);
	}
	if (hex > 9)
	{
		ft_putchar (bhex + '0');
		ft_putchar ((hex - 10) + 'a' );
	}
	else
		ft_putchar (hex + '0');
}

void	ft_putstr_non_printable(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = a - 1;
	while (str[++b] != '\0')
	{
		a = str[b];
		if ((a >= 0 && a <= 31) || a == 127)
		{
			ft_putchar('\\');
			if (a <= 16)
			{
				if (a <= 9)
				{
					ft_putchar('0');
					dechex(a);
				}
				else
					dechex(a);
			}
		}
		else
			ft_putchar(str[b]);
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("HOLA\n\bQUE TAL \t  \v \r");
	return (0);
}*/
