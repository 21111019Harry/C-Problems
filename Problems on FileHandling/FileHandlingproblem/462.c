#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


#define  Blocksize 100
int space(char *prr);
int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the file name:-");
	scanf("%s",arr);

	iRet = space(arr);

	printf("%d",iRet);
	return 0;
}
int space(char *brr)
{
	int fd = 0, i = 0, iCnt = 0, iRet = 0;
	char prr[Blocksize];

	fd = open(brr,O_RDONLY);

	if(iRet==-1)
	{
		printf("Unable to open file:-");
		return -1;
	}

	while((iRet = read(fd,prr,Blocksize))!=0)
	{
		for(i=0;i<iRet;i++)
		{
			if(prr[i]==' ')
			{
				iCnt++;
			}
		}
	}
	close(fd);
	return iCnt;
}
