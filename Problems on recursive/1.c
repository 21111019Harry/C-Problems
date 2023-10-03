#include<stdio.h>


//write a program which is use to display 3 * on screen
void DisplayI(int no);
void DisplayR(int no);
int main()
{
	int i = 3;
	DisplayI(i);

	DisplayR(i);
}
void DisplayI(int no)//display using itteration 
{
	int i = 0;//aata ith ya i cha auto storage class ahe.bcz dilela nahiye mhnun default auto storage class zala
	for(i=1;i<=no;i++)//tr ya i la recursion madhe static madhe convert kraych static storage class madhe.
	{		   //static ka tr to value preserve krun theto aani tech aaplyala recursion amdhe lagnar ahe.
		printf("*\t");//loop madhli body jshichya tshi recursion madhe yeil.
	}
	printf("\n");
}
void DisplayR(int no)//display using recursion
{
	static int i = 1;//ith aapn i la direct 1 kely bcz static ha reinitilize hot nahi mhnje ekdach dya perfect.
	if(i<=no)//he terminating condi asits yenar loop la thambvnari aata thi ith recursion la thambvtey.
	{
	//	i++;//he lihilyavr aapn jata jata print krto mhnje forward print krto
		printf("*\t");
		i++;//aani ithaapn yeta yeta print krto mhnje reverse print krto 
		DisplayR(no);//he tail recursion ahe mhnje logic vrti ahe aani call khali ahe 
	}
}

