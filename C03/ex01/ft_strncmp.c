/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:51:02 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/20 20:53:10 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	flag;

	flag = 0;
	while (s1[flag] != '\0' && s2[flag] != '\0' && flag < n)
	{
		if (s1[flag] != s2[flag])
			return (s1[flag] - s2[flag]);
		++flag;
	}
	if (flag != n)
		return (s1[flag] - s2[flag]);
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
