/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:57:36 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/19 11:20:03 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
		dest[a++] = '\0';
	return (dest);
}
/*
int	main (void)
{
	char	a[] = "hola mundo";
	char	b[20];
	char	*p;

	p = ft_strncpy(b,a,25);
	printf("%s", p);
	return (0);
}
*/
