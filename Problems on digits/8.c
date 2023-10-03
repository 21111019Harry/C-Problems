#include<stdio.h>

//accept no from user and display the addition of even and odd digit of that no 
//i/p 1234 o/p 6 4 i/p 4563 o/p 10 8
void EvenoddAdd(int iNo)
{
	int ieven=0,iodd=0,iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		printf("addition of even no: 1 \naddition of odd no: 0");
		return ;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
		//	ieven++;//yachyane aapn fkt i/p madhe even digit kiti ahet te print krtoy
			ieven=ieven+iDigit;//yachya ne i/p madhil even digit chi addition krtoy
		}
		else
		{
		//	iodd++;//yachyane aapn fkt i/p madhe oddd digit kiti ahet te print krtoy
			iodd=iodd+iDigit;
		}
		iNo=iNo/10;
	}
	printf("%d is Addition of even no:\n",ieven);
	printf("%d is Addition of odd no:",iodd);
}
int main()
{
	int iValue=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	EvenoddAdd(iValue);

	return 0;
}
