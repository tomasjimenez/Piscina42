#include<unistd.h>

void ft_putstr(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(void)
{
	//char *verga;
	//verga = "verga";

	ft_putstr("TOMAS ERES GAY");
	return(0);
}
