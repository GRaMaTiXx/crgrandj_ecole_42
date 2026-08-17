/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 10:25:47 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/17 17:20:01 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alphabet;

	is_alphabet = 1;
	i = 0;
	while (str[i] != '\0' && is_alphabet == 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			is_alphabet = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			is_alphabet = 1;

		else
			is_alphabet = 0;
		i++;
	}
	return (is_alphabet);
}
