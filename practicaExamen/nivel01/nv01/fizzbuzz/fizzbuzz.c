#include<unistd.h>

void transform(number)
{
	if(number < 10)
	{
		number += '0';
		write(1, &number, 1);
		return;
	}
		transform(number / 10);
		transform(number % 10);
}
int	main(void)
{
	int number;

	number = 1;

	while(number <= 100)
	{
		if(number % 3 == 0 && number % 5 == 0)
		{
			write(1, "FizzBuzz", 8);
		}
		else if(number % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(number % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
			transform(number);
		write(1, "\n", 1);
		number++;
	}

	return(0);
}
