#include<unistd.h>

int	 main(int ac, char **av)
{
	int i;
	i = 0;
	ac = 1;

	while(av[ac][i] != '\0')
	{
		if((av[ac][i] >= 'a' && av[ac][i] <= 'z') || (av[ac][i] >= 'a' && av[ac][i] <= 'z'))
		{
			av[ac][i] += 13;;
		}
		write(1, &av[ac][i], 1);
		i++;
	}
	return(0);
}
