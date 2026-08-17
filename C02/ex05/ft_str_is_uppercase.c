/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 16:27:15 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/17 16:40:56 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_higher;

	i = 0;
	is_higher = 1;
	while (str[i] != '\0' && is_higher == 1)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			is_higher = 0;
	}
	return (is_higher);
}
