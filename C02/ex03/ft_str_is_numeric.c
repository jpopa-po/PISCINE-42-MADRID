/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:49:01 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/18 16:04:19 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if (str[a] < 48 || str[a] > 57)
		{
			cond = 0;
		}
		a++;
	}
	return (cond);
}
/*int	main (void)
{
	char	cond[] = "";
	char	*ptr;
	int		i;

	ptr = &cond[0];
	i = ft_str_is_numeric(ptr);
	printf("%d", i);
	return (0);
}*/
