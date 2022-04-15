#include<unistd.h>
#include<stdio.h>

int main(int ac, char **av)
{
	int i;
	
		while(av[1][i] != '\0')
		{
			if(av[1][i] == 'a')
			{
			write(1, "a", 1);
			write(1, "\n", 1);
			return(0);
			}
			i++;
		}
		write(1, "\n", 1);
}
