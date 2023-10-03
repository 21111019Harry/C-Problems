#include<stdio.h>

///////////////////////////////
//name:Divisible
//input:int
//output:int 
//discription:Division
//other:Harshl
//date:3-9-2021
//////////////////////////////
#define True 1//he ith aapn sangtoy ki true mhnje 1 aani false mhnje 0 as aapn ith define krtoy 
#define False 0//yacha arth ahe ki he aadhi comipler bghel aani aapn tyala sangtoy ki jith true ahe tith 1 tak aani jith false ahe tith 0 tak
typedef int bool;//#define he preprocessor handel krto aani typedef he compiler handel krto ith boolch lihav as nahiye tumhi ith kahihi lihu shkto 
//typedef cha use ha campnies madhe motha datatype che nav lihinyapeshka tyach nav chot lihinyasathi hoto
bool Divisible(int iNo1)//ith aapn int return 1 or 0 krt hoto jevha return hota tevha aani aata true lihila ahe pn true ha integer nahi ye mhnun aapn ith bool lihila 
{
	if(iNo1%3==0)
	{
	//	printf("Number is divisible by 3\n");
		return True;//ith return 1 or 0 gheu shkto tumhi kahihi kra pn te main madhe mention krun ts output print kra mhnun aapn ith true false ghetly
	}
	else
	{
	//	printf("Number is not divisible by 3\n");
		return False;
	}
	
}
/////////////////////////////////
//Entry point function
////////////////////////////////
int main()
{
	printf("---------Ith aapn 3 type ne he example solve kru shkto-------\n");
	printf("---------First type mhnje direct division ch logic he main madhech lhihaych pn mg to program standard aani reuseble nahiye----\n");
	printf("---------Second type mhnje function lihun tyatunch print kraych yes or no-------\n");
	printf("---------Third type mhnje function mhdhun main madhe return kraych yes or no mg main print krnar yes or no ha type aapn use kelay-----\n");
	int iH=0,iRet=0;
	printf("Enter the number:\n");
	scanf("%d",&iH);
	iRet=Divisible(iH);

	if(iRet==1)//ith 1 or True lihil tri chalel kran aapn te #define kely mhnje True lihil tr te internally te 1 honar
	{
		printf("Number is divisible by 3\n");
	}
	else
	{
		printf("Number is not divisible by 3\n");
	}
	return 0;
}
