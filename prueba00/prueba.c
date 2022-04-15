#include <unistd.h>

void prueba (int n)
{
	char  b[n];
	int pos;
	
	pos = 0;

	while(pos <= n)
	{
		b[pos] = pos + '0';
		pos++;
	}

	write(1, &b, n);

}

int main (void)
{
	prueba(6);
	return(0);
}
