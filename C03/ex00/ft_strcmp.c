/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:34:02 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/19 13:14:27 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	char s1[22] = "ilestpaslonngoualorssi";
// 	char s2[11] = "tuespasloin";
// 	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
//  printf("vrai strcmp: %d\n", strcmp(s1, s2));
// }
// //**********************************************************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	char s2[22] = "ilestpaslonngoualorssi";
// 	char s1[11] = "tuespasloin";
// 	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
//  printf("vrai strcmp: %d\n", strcmp(s1, s2));
// }
// //**********************************************************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>	
// int main()
// {
// 	char s2[11] = "tuespasloin";
// 	char s1[11] = "tuespasloin";
// 	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
// 	printf("vrai strcmp: %d\n", strcmp(s1, s2));
// }
// //**********************************************************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	char s1[11] = "tuestreloin";
// 	char s2[11] = "tuespasloin";
// 	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
//  printf("vrai strcmp: %d\n", strcmp(s1, s2));
// }
// //*********************************************************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	char s2[11] = "tuestreloin";
// 	char s1[11] = "tuespasloin";
// 	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
//  printf("vrai strcmp: %d\n", strcmp(s1, s2));
// }