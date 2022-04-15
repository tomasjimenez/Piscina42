#include<unistd.h>

void	 prueba(int number)
{
	if(number < 10)
	{
		number += '0';
		write(1, &number, 1);
		return;
	}

	prueba(number / 10);
	prueba( number % 10);
}
int main(void)
{
	int number;
	number = 1;

	while(number <= 100)
	{
		if(number % 5 == 0 && number % 3 == 0)
		{
			write(1, "FizzBuzz", 8);
		}
		else if(number % 3 == 0)
		{
			write(1, "Fizz", 4);
		}
		else if(number % 5  == 0)
		{
			write(1, "Buzz", 4);
		}
		else
		{
		prueba(number);
		}
		write(1, "\n", 1);
		number++;
	}
	return(0);
}
