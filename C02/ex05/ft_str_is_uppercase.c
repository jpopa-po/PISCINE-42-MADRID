/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:11:16 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/18 16:16:46 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if (str[a] < 65 || str[a] > 90)
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
	char	cond[] = "hOLA";
	char	*ptr;
	int		i;

	ptr = &cond[0];
	i = ft_str_is_uppercase(ptr);
	printf("%d", i);
	return (0);
}
*/
