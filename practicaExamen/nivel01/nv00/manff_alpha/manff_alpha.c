#include<unistd.h>

int main(void)
{
	char i;
	char j;

	j = 'A';
	i = 'a';
	while(i <= 'z' || j <= 'Z')
	{
		write(1, &i, 1);
		i++;
		j++;
		write(1, &j, 1);
		j++;
		i++;	
	}
	return(0);
}
