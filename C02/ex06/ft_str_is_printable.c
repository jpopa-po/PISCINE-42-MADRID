/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:13:58 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/18 16:30:15 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	static int	cond;
	int			a;

	a = 0;
	cond = 1;
	if (str[0] == '\0')
	{
		return (cond);
	}
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] == 127)
		{
			cond = 0;
		}
		a++;
	}
	return (cond);
}
/*
int	main (void)
{
	char	cond[] = "";
	char	*ptr;
	int		i;

	ptr = &cond[0];
	i = ft_str_is_printable(ptr);
	printf("%d", i);
	return (0);
}*/
