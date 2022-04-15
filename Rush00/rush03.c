
#include <unistd.h>

void	ft_putchar(char c);

void rush(int x,int y)

{
	int c;
	int f;

	f = 1;
	while (f <= y)
	{
		c = 1;
		while(c <= x)
		{
			if(c == 1 &&  f == 1 )
			{
				ft_putchar('A');
			}
			if(c > 1 && c < x && f == 1)
			{
				ft_putchar('B');
			}	
			if(c == x && f == 1)
			{
				ft_putchar('C');
			}
			if(f > 1 && c == 1 && c < y )
			{
				ft_putchar('B');
			}			
			c++;
		}
		write(1, "\n", 1);
		f++;
	}
}
