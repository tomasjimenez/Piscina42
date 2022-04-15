#include<unistd.h>

int main(int ac, char **av)
{
	int i;
	i = 0;

	ac = 1;

	while(av[ac][i] != '\0')
	{
		if((av[ac][i] >= 97 && av[ac][i] <= 122) || (av[ac][i] >= 65 && av[ac][i] <= 90))
		{
			av[ac][i]++; 
		}
		write(1, &av[ac][i], 1);
		i++;
	}
	
	return(0);
}
