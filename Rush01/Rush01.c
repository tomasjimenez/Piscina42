#include<unistd.h>

void print_box(void)
{
	int box[4][4];
	int x;
	int j;
	
	x = 0;
	j = 0;


	 while(box[4][4] < 4)
	 {
	 	write(1, "0", 1);
		x++;
	 }
}

int main(void)
{
	print_box();
	return(0);
}
