/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 16:30:36 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/13 17:33:53 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;

	result = *a / *b;
	*b = *a % *b;
	*a = result;
}
// int	main (void)
// {
// 	int a, b;
// 	a = 5;
// 	b = 9;
// 	char c_a;
// 	char c_b;
// 	ft_ultimate_div_mod(&a, &b);
// 	c_a = a + '0';
// 	c_b = b + '0';
// 	write(1, &c_a, 1);
// 	write(1, &c_b, 1);
// }