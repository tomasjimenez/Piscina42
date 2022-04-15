#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char temp;
	i = 0;
	
	/*int total;
	int cut;
	ac = 1;
	total = 0;
	while(av[ac][total] != '\0')
	{
		total++;
	}
	cut = total;
	while (av[ac][total] == ' ')
	{
		total--;
	}
	while (av[ac][total] != ' ')
	{
		total--;
	}
	total++;
	while (av[ac][total] != '\0')
	{
		write(1, &av[ac][total], 1);
		total++;
	}*/

	while(av[ac][i] != '\0')
	{
		temp = av[ac][i];
		temp++;
		write(1, &temp, 1);
		i++;
	}

	return (0);
}
