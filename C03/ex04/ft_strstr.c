/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:53:11 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/20 21:01:48 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include	<string.h>
// #include	<stdio.h>
// int	main()
// {
// 	char	str[] = "tu es pas loin il est banana pas lonng ou alors si";
// 	char	to_find[] = "banana";
// 		printf("%s", ft_strstr(str, to_find));
// 		printf("\n");
// }