/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 16:06:42 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/17 17:58:14 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lower;

	i = 0;
	is_lower = 1;
	while (str[i] != '\0' && is_lower == 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			is_lower = 0;
	}
	return (is_lower);
}
