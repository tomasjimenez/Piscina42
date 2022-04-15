#include<unistd.h>
#include<stdio.h>


char	*ft_strrv(char *str)
{
	int i;
	char tmp;
	int len;

	i = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
	}
	return (str);
}

int main(void)
{
	int i;
	char *fin;
	char str[5] = "hola";
	
	i = 0;
	fin = ft_strrv(str);
	while(fin[i] != '\0')
	{
		write(1, &fin[i], 1);
		i++;
	}
}
