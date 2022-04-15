#include<unistd.h>

int	main(int ac, char **av)
{
	int i;
	int num;

	i = 0;
	num = ac - 1;
	if(ac >= 2)
	{
		while(av[num][i] != '\0')
		{
			write(1, &av[num][i], 1);
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
	return(0);
}
