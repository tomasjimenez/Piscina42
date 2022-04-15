#include<stdio.h>

int main(void)
{
	int a;
	a = 5;

	int *p;
	p = &a;

	*p = a;
;
	printf("%d", *p);
}
