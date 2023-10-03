#include<stdio.h>
#include<stdbool.h>

//#define true 1
//#define false 0
void DD(int iNo)
{
	int iDigit = 0, iRev = 0;
	bool flag=false;
	if(iNo<0)
	{
		iNo=-iNo;
		flag=true;
	}
	while (iNo > 0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	if(flag==true)
	{
		printf("%d",-iRev);
	}
	else
	{
		printf("%d",iRev);
	}
}
int main()
{
	int iValue=0;
	printf("Enter the NO:");
	scanf("%d",&iValue);
	DD(iValue);
	return 0;
}
