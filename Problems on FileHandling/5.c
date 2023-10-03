#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<malloc.h>


//accept file name and no. of bytes from user and read that no. of bytes from the given file.

void display(char *brr, int size);
int main() 
{
	char arr[20];
	int length = 0;

	printf("Enter the file name:-");
	scanf("%s",arr);

	printf("Enter the size you want to read:-");
	scanf("%d",&length);

	display(arr,length);

	return 0;
}
void display(char *brr, int size)
{
	int fd = 0, iRet = 0;
	char *prr = NULL;

	fd = open(brr,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to open file:");
		return ;
	}
	//ith aapn malloc krtoy bcz aapn aadhichya question madhe arr[20]or brr[20] as lihit hoto but jr user ne 
	//30 dil or 60 dil tr tr 2 problem hotayet ek shortage and westage mhnun aapn program run hotana use la
	//vicharch ki kiti size or kiti byte read kraychya ahet.

	prr = (char *)malloc(sizeof(char));//it aapn malloc kel bcz aadhi aapla call open function la jail mg malloc la yeil jr to open function la jaun error aala unable to open file tr mhnun malloc ith kel ahe mhnje jr codeith aala tr malloc kelel west nahi janar

	iRet = read(fd,prr,size);

	if(iRet==-1)
	{
		printf("Unable to read file:");
		close(fd);
		free(prr);
		return ;
	}

	printf("Data is:- %s",prr);
	close(fd);
	free(prr);
}
