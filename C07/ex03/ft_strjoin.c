/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:00:44 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/04/24 17:16:44 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*ft_makestr(char *dest, char *src, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	j = 0;
	while (sep[j])
	{
		dest[i] = sep[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_go(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (0);
}

int	ft_strlen(int size, char **strs)
{
	int	letter;
	int	i;
	int	j;

	letter = 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[j])
		{
			letter++;
			j++;
		}
		i++;
	}
	return (letter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		return (str);
	}
	len = ft_strlen(size, strs);
	str = (char *)malloc((len + (size - 1) * ft_go(sep)) * sizeof(char *) + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i == size - 1)
			str = ft_makestr(str, strs[i], "\0");
		else
			str = ft_makestr(str, strs[i], sep);
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(4, argv, "a"));
}*/
