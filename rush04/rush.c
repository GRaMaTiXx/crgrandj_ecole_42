#include <unistd.h>
void    ft_putchar(char c);
void    ft_prio(int l, int h, int x, int y);
void    rush( int x, int y)
{
    int    l;
    int    h;
    
    h = 1;
    
    while (h <= y)
    {
        l = 0;
        while(l < x)
        {
            ft_prio(l, h, x, y);
            l++;
        }
        write(1, "\n", 1);
        h++;
    }
}

void    ft_prio(int l, int h, int x, int y)
{
    if ((h == 1 && l == 0) || (h == y && l == x-1))
        ft_putchar('A');
    else if((h == 1 && l == x-1) || (h == y && l == 0))
        ft_putchar('C');
    else if ((h > 1 && l == 0) || (h > 1 && l == x-1))
        ft_putchar('B');
    else if ((h == 1 && l < x) || (h == y && l < x))
        ft_putchar('B');
    else
        ft_putchar(' ');
}