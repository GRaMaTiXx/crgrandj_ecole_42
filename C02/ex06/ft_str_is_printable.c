/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgrandj <crgrandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 17:08:19 by crgrandj          #+#    #+#             */
/*   Updated: 2026/08/18 14:22:11 by crgrandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 1;
	while (str[i] != '\0' && is_printable == 1)
	{
		if (str[i] >= ' ' && str[i] <= '~')
			i++;
		else
			is_printable = 0;
	}
	return (is_printable);
}
