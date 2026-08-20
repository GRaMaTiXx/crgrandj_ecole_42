/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:12:46 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/20 21:01:27 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0')
		{
			i++;
		}
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	unsigned int n;
// 	n = 4;
// 	char s1[22] = "ilestpaslonngoualorssi";
// 	char s2[11] = "tuespasloin";
// 	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
//  printf("vrai strncmp: %d\n", strncmp(s1, s2, n));
// }
// //**********************************************************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	unsigned int n;
// 	n = 7;
// 	char s2[22] = "ilestpaslonngoualorssi";
// 	char s1[11] = "tuespasloin";
// 	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
//  printf("vrai strncmp: %d\n", strncmp(s1, s2, n));
// }
// //**********************************************************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	unsigned int	n;
// 	n = 9;
// 	char s2[11] = "tuespasloin";
// 	char s1[11] = "tuespasloin";
// 	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
//  printf("vrai strncmp: %d\n", strncmp(s1, s2, n));
// }
// //**********************************************************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	unsigned int n;
// 	n = 4;
// 	char s1[11] = "tuestreloin";
// 	char s2[11] = "tuespasloin";
// 	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
//  printf("vrai strncmp: %d\n", strncmp(s1, s2, n));
// }
// //*********************************************************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	unsigned int n;
// 	n = 4;
// 	char s2[11] = "tuestreloin";
// 	char s1[11] = "tuespasloin";
// 	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
//  printf("vrai strncmp: %d\n", strncmp(s1, s2, n));
// }
