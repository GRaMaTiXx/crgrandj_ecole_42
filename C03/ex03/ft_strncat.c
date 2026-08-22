/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:52:39 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/21 12:13:00 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	iter1;
	unsigned int	iter2;

	iter1 = 0;
	iter2 = 0;
	while (dest[iter1] != '\0')
		iter1++;
	while (iter2 < nb && src[iter2] != '\0')
	{
		dest[iter1] = src[iter2];
		iter2++;
		iter1++;
	}
	dest[iter1] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char	src[50] = "tuespasloin";
// 	char	dest[50] = "ilestpaslonngoualorssi";
// 	int 	i = 0;
// 	unsigned int 	nb = 20;
// 	ft_strncat(dest, src, nb);
// 	while ( dest[i] != '\0')
// 	{
// 		printf("%c", dest[i]);
// 		i++;
// 	}
// 	printf("\n");
// }