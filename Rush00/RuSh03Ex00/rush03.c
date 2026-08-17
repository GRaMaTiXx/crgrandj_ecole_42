/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 18:10:08 by manguyen          #+#    #+#             */
/*   Updated: 2026/08/15 18:22:30 by manguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	largeur_df(int x)
{
	int	l;

	l = 0;
	while (l < x)
	{
		if (l == 0)
			ft_putchar('A');
		else if (l == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		l++;
	}
	ft_putchar('\n');
}

void	largeur_m(int x)
{
	int	l;

	l = 0;
	while (l < x)
	{
		if ((l == 0) || (l == x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
		l++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	h;

	h = 0;
	if (y <= 0 || x <= 0)
		return ;
	while (h < y)
	{
		if (h == 0 || h == y - 1)
			largeur_df(x);
		else
			largeur_m(x);
		h++;
	}
}
