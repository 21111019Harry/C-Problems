#include<stdio.h>


//write a function in a recursive way and display 1 2 3 4 on screen.

void DisplayR(int no);
int main()
{
	int i = 5;

	DisplayR(i);

	return 0;
}
void DisplayR(int no)
{
	static int i = 1;

	if(i<=no)
	{
		printf("%d\t",i);
		i++;
		DisplayR(no);
	}
}
