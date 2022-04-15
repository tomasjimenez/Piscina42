#include<unistd.h>

int	main(int ac, char **av)
{
	int i;
	int cont;

	cont = 0;
	i = 0;
	while(av[1][i] != '\0')
	{
		if(av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			cont = av[1][i]	- 65;
		}
		if(av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			cont = av[1][i] - 97;
		}
		while(cont >= 0)
		{
			write(1, &av[1][i], 1);
			cont--;
		}
		i++;
	}
	return(0);
}
