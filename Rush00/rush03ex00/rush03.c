#include "ft_putchar.c"
#include <unistd.h>

// void	rush(int x, int y)
// {
// 	char	str1[x];
// 	char	str2[x];
// 	int	i;

// 	str1[0] = 'A';
// 	str2[0] = 'B';
// 	str1[x] = 'C';
// 	str2[x] = 'B';
// 	i = 1;
// 	while (i < x)
// 	{
// 		str1[i] = 'B';
// 		str2[i] = ' ';
// 		i++;
// 	}
// 	str1[i-1] = '\0';
// 	str2[i-1] = '\0';
// 	rush03(str1, str2, y, x);
// }

// int	rush03(char *str1, char *str2, int *y, int *x)
// {
// 	int	h;
// 	int	l;

// 	h = 1;
// 	while (h <= y)
// 	{
// 		l = 0;
// 		while (l <= x)
// 		{
// 			if (h == 1 || h == y)
// 				ft_putchar(str1[l]);
// 			else
// 				ft_putchar(str2[l]);
// 			l++;
// 		}
// 		h++;
// 		write(1, "\n", 1);
// 	}
// 	return 0;
// }


int	rush03( int y, int x)
{
	int	h;
	int	l;

	h = 1;
	while (h <= y)
	{
		l = 1;
		while (l <= x)
		{
			if ((h == 1 && l == 1) || (h == y && l == 1))
				ft_putchar('A'); // a
			else if ((h == y && l == x) || (h == 1 && l == x))
				ft_putchar('C');
			else if ( l == 1 || l == x || h == 1 || h == y)
			ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		h++;
		write(1, "\n", 1);
	}
	return 0;
}