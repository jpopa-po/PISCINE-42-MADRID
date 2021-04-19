/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:22:37 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/19 19:30:06 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
		ft_putchar ((hex - 10) + 'a');
	}
	else
		ft_putchar (hex + '0');
}

void	printadd(void *addr)
{
	char	add[15];
	long	add2;
	int		i;

	add2 = (long)addr;
	i = 0;
	while (add2 > 0)
	{
		add[i] = add2 % 16;
		if (add[i] < 10)
			add[i] += '0';
		else
			add[i] += 87;
		add2 = add2 / 16;
		i++;
	}
	while (i < 15)
	{
		add[i] = '0';
		i++;
	}
	while (--i >= 0)
		ft_putchar(add[i]);
}

void	println(void *addr, int size)
{
	int		i;
	int		print;
	char	*add;

	add = (char *)addr;
	i = 0;
	while (i < size)
	{
		dechex(add[i++]);
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	print = ((16 - size) * 2) + (19 - size) / 2;
	while (--print > 0)
		ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (add[i] >= 32 && add[i] <= 126)
			ft_putchar(add[i]);
		else
			ft_putchar('.');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	printchar;
	unsigned int	a;

	a = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			printchar = 16;
			size -= 16;
		}
		else
		{
			printchar = size;
			size = 0;
		}
		printadd(addr + a);
		ft_putchar(':');
		ft_putchar(' ');
		println(addr + a, printchar);
		ft_putchar('\n');
		a += 16;
	}
	return (addr);
}

int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}

int	main()
{
	char str[] = "Este ejercicio es chunguisimo y me estoy desesperndo \f\n\v\r\a";
	ft_print_memory(str, ft_strlen(str));
}
