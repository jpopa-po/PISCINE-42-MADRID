/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:00:41 by jpopa-po          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/04/21 10:33:48 by jpopa-po         ###   ########.fr       */
=======
/*   Updated: 2021/04/20 20:53:11 by jpopa-po         ###   ########.fr       */
>>>>>>> 07ebbc6bd164642234a510eb3abb76940f1f0b43
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
=======
	int	flag;

	flag = 0;
	while (s1[flag] != '\0' || s2[flag] != '\0')
	{
		if (s1[flag] != s2[flag])
			return (s1[flag] - s2[flag]);
		flag++;
>>>>>>> 07ebbc6bd164642234a510eb3abb76940f1f0b43
	}
	return (0);
}
/*
int	main(void)
{
	char *str1 = "holaaba";
	char *str2 = "hola";

	printf("mio: %d\n", ft_strcmp(str1, str2));
	printf("original: %d", strcmp(str1, str2));
}*/
