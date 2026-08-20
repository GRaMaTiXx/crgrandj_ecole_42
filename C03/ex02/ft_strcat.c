/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:11:02 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/19 16:39:10 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	iter1;
	int	iter2;

	iter1 = 0;
	iter2 = 0;
	while (dest[iter1] != '\0')
		iter1++;
	while (src[iter2] != '\0')
	{
		dest[iter1 + iter2] = src[iter2];
		iter2++;
	}
	dest[iter1 + iter2] = '\0';
	return (dest);
}
// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char	src[50] = "tuespasloin";
// 	char	dest[50] = "ilestpaslonngoualorssi";
// 	int 	i = 0;

// 	ft_strcat(dest, src);
// 	while ( dest[i] != '\0')
// 	{
// 		printf("%c", dest[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
