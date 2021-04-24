/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 23:38:36 by marvin            #+#    #+#             */
/*   Updated: 2021/04/23 23:38:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;
	int		len;

	len = ft_strlen(src);
	i = 0;
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	while (len--)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
int main(void)
{
	char ch[6] = "hello";
	ft_strdup(ch);
	printf("%s", ch);
	return (0);
}*/
