#include<iostream>

using namespace std;

//specific aproch//
/*int Maximum(int no1, int no2)
{
	if(no1>no2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}*/
//genric aproch//
template<class T>//ith aapn template<type name T> as pn lihu shkto
T Maximum(T no1, T no2)
{
	if(no1>no2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i = 10, j = 20, iRet = 0;
	float fRet = 0.0 , x = 3.4, y = 6.6;

	iRet = Maximum(i,j);

	if(iRet==1)
	{
		cout<<i<<"\n";
	}
	else
	{
		cout<<j<<"\n";
	}

/*	fRet = Maximum(x,y);

	cout<<fRet<<"\n";*/

	return 0;
}

