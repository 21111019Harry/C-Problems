#include<stdio.h>


//accept 3 no user and print the largest no
///////////////////////////
//Name:Largest
//Input:int,int,int
//Output:int
//Discription:Largest number
//Other:Harshal
//Date:
///////////////////////////
int Largest(int iValue1,int iValue2,int iValue3)
{

	if((iValue1>=iValue2) && (iValue1>=iValue3))
	{
		return iValue1;
	}
	else if((iValue2>=iValue1) && (iValue2>=iValue3))
	{
		return iValue2;
	}
	else
	{
		return iValue3;
	}
}
//////////////////////////
//Entry point function
/////////////////////////
int main()
{
	int iNo1,iNo2,iNo3,iRet;
	printf("Enter the no:\n");
	scanf("%d %d %d",&iNo1,&iNo2,&iNo3);
	iRet=Largest(iNo1,iNo2,iNo3);
	printf("%d is the largest no",iRet);
	return 0;
}
