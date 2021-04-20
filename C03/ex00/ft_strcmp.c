/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:00:41 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/20 13:21:43 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	flag;

	flag = 0;
	while (s1[flag] != '\0' || s2[flag] != '\0')
	{
		if (s1[flag] != s2[flag])
			return (s1[flag] - s2[flag]);
		flag++;
	}
	return (0);
}

int	main(void)
{
	char *str1 = "holaaba";
	char *str2 = "hola";

	printf("mio: %d\n", ft_strcmp(str1, str2));
	printf("original: %d", strcmp(str1, str2));
}
