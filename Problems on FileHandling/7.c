#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

//accept file name and one character from user and calculate frequency of that character in the file

#define Blocksize 100
int freq(char *prr);
int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the file name:-");
	scanf("%s",arr);

	iRet = freq(arr);
	printf("%d",iRet);
	return 0;
}
int freq(char *prr)
{
	int fd = 0, iRet = 0, iCnt = 0;
	char brr[Blocksize];//local buffered
	char ch = 'P';

	fd = open(prr,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file:");
		return -1;
	}
	while((iRet = read(fd,brr,Blocksize))!=0)
	{
		int i = 0;
		//ya loop jr optimize kraych asel tr 2 ptr ghyayche aani 1 buffered array chya left la lavaycha 
		//and 2nd ptr array chya right la lavaycha mhnje shevti.right cha ++ kraycha, left cha -- kraycha.
		for(i=0;i<iRet;i++)
		{
			if(brr[i]==ch)
			{
				iCnt++;
			}
		}
		memset(brr,0,Blocksize);//ith pratek ferila array clean houn jatoy next data ghyayla HW kde. 
	}
	close(fd);
	return iCnt;
}
//maximum throughput in minimum hardware movement. mhnje pratek veles hardware kde o/p ghyla n jan. mhnje aapn jr 
//aapn buffer io use kela tr he statement achive hot. nahitr mg te getchar function use krun tumhi hardware la jatun1,1 character aanto. mhnje tyachya jast itteration hotat.
