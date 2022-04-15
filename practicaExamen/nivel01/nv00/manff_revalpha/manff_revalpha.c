#include<unistd.h>

int main(void)
{
	int i;
	int j;

	i = 'z';
	j  = 'Z';
	while(i >= 'a' || j >= 'A')
	{
		write(1, &i, 1);
		i--;
		j--;
		write(1, &j, 1);
		j--;
		i--;
	}
	return(0);
}

