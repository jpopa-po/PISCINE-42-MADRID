/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:51:02 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/21 10:33:14 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		++a;
	}
	if (a != n)
		return (s1[a] - s2[a]);
	return (0);
}
/*
int	main(void)
{
	char *str1 = "holaaba";
	char *str2 = "hola";

	printf("mio: %d\n", ft_strncmp(str1, str2, 3));
	printf("original: %d", strncmp(str1, str2, 3));
}*/
