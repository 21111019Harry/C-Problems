#include<stdio.h>

////////////////////
//Name:Addition
//Input:int,float
//Output:Float
//Discription:Addition of 1 float and 1 integer 
//Other:Harshal
//Date:
//////////////////////
float Addition(int iValue,float fValue)
{
	int iRet=0;
	iRet=iValue+fValue;
	return iRet;

}

///////////////////////
//Entry point function
///////////////////////
int main()
{
	int iNo;
	float fNo,fans;
	printf("Enter the no:");
	scanf("%d",&iNo);
	printf("Enter Float no:");
	scanf("%f",&fNo);
	fans=Addition(iNo,fNo);
	printf("The Addition is %f\n",fans);
	return 0;
}
