#include<unistd.h>

int	main(int ac, char **av)
{
	int i;
	ac = 1;

	while(av[ac][i] == ' ')
	{
		i++;
	}
	while(av[ac][i] != ' ')
	{
		write(1, &av[ac][i], 1);
		i++;
	}	
}
