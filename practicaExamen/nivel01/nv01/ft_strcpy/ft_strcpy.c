#include<unistd.h>
#include<stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int main(void)
{
	char s1[80] = "hola";
	char s2[80] = "";
	ft_strcpy(s2, s1);
	printf("%s", s1);
}
