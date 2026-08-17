/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 09:33:43 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/13 11:15:55 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	num2 = 0;
	num3 = 0;
	while (num1 <= 7)
	{
		while (num2 <= 9)
		{
			while (num3 <= 9)
			{
				if ((num1 != num2) && (num2 != num3) && (num1 != num3))
				{
					if ((num1 <= 7) && (num2 <= 8))
					{
						write (1, &num1&num2&num3, 3);
					}
				}
				num3++;
			}
			if (num3 == 9)
			{
				num3 = 0;
			}
			num2++;
		}
		if (num2 == 9)
		{
			num2 = 0;
		}
		num1++;
	}
}
