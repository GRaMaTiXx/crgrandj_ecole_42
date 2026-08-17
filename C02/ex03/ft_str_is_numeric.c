/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:25:32 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/17 17:18:18 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i] != '\0' && is_numeric == 1)
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			is_numeric = 0;
	}
	return (is_numeric);
}
