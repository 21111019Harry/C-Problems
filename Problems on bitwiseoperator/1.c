//Bitwise operator//
//Bits vr kam krne mhnje bitwise operator.


//Bitwise &,|,^ he 3 operator aapn Biwise madhe use krnar ahot single &(bitwise and),single |(bitwise or),bitwise ex-or(^) he bitwise ahet.
//aatapryant aapn je if madhe &&,|| use kele te logical hote.
//ith data madhe shifting krav lagt mhnun aapn shift operator use krnar aahot left shifr(<<),right shift(>>),negate or tilda (~).
//ith aapn binary numbring system use krnar aahot.aata ith fkt range badnar aadhi aapn problems on digit madhe %,/ nantr 10 ghet hoto karn to decimal chi range hoti aata ith aaplyala 2 ghyava lagel karn 2 hi binary chi range ahe.
//aadhi iDigit=iNo%10;  aata iDigit=iNo%2;
//system programing krta ha most imp topic ahe.
//&,|,^,<<,>> he binary operator ahet and ~ ha unary operator ahe.


//we can convert decimal no into binary no. by dividing the no. with the base of binary system (2).





//accept no. from user and display its binary representation
//i/p 41 o/p 100101 he 41 ch binary representation ahe he ult print hoil karn aapn big endianness follow krt ahot

#include<stdio.h>
#include<stdbool.h>

//ith aapn typedef krun unsigned int la UINT he nevin nav dily unsigned int ha fkt positive value gheto.
//ith aapn unsigned int ghetoy karn ith mla 32 bit purn use kraychya ahet. aani ith fkt int ghetl tr aapn fkt 16 ch bit use kru shkto mhnun aapn ith unsigned int ghetoy.

typedef unsigned int UINT;

void Display(UINT iNo);
int main()
{
	UINT iValue = 0; 
	printf("Enter the No:-");
	scanf("%d",&iValue);

	Display(iValue);
 
//	int no = 41; //41 cha binary 101001 to the base 2.  

	return 0; 
}
void Display(UINT iNo)
{
	int iDigit = 0, iCnt = 0;
	while(iNo>0)
	{
		iDigit = iNo%2;
		if(iDigit==1)
		{
			iCnt++;
		}
		printf("%d",iDigit);//1 0 1 0 0 1 to the base 2.
		iNo = iNo/2;
	}
	printf("\n%d",iCnt);

}
   

/*
		int no = 41;

 	Big Endian :-
	|-------------------------------------|
    no=	| 00000000|00000000|00000000|00101001 |	
	|-------------------------------------|
      100				      104
	ith 1st bit right side la ahe karn aapn Big Endianess follow krto mhnun counting magun hote right side cha last wala 1 ahe aani left side cha 1 st bit mhnje 36 bit.

 */
