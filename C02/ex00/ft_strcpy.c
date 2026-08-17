/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 11:48:18 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/17 18:33:42 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char	*ft_strcpy(char *dest, char *src);
// #include <stdio.h>
// int main()
// {
//     char src[40] = "This was once someone who struggled less";
//     char dest[40] = "There was once someone who stuggled";
// 	char a;
//     int	i = 0;
//     printf("\n\nStr from src:\n");
//     while (src[i] != '\0')
// 	{
//         printf("%c", src[i]);
//         i++;
//     }
//     printf("\n i = %d\n\n", i);
// 	i = 0;
// 	printf("Str from  dest:\n");
// 	while (dest[i] != '\0')
// 	{
//         printf("%c", dest[i]);
//         i++;
//     }
// 	printf("\n i = %d\n", i);
// 	ft_strcpy( dest, src);
//     i = 0;
//     printf("\n\nStr once copied on dest:\n");
//     while (dest[i] != '\0')
//     {
//         printf("%c",src[i]);
//         i++;
//     }
//     printf("\n i = %d \n", i);
//     scanf("%c", &a);
//     return 0;
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
