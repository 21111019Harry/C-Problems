#include<stdio.h>


void Division();
int main()
{
	printf("INSIDE MAIN\n");
	Division();
	return 0;
}
void Division()
{
	int iCnt=0;
	while(iCnt<5)
	{
		printf("HELLO\n");
		iCnt++;
	}
}
