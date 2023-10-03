#include<iostream>

using namespace std;


template<class T>
T Multiply(T no1, T no2)
{
	T ans;
	ans = no1*no2;
	return ans;
}
int main()
{
	int iRet = Multiply(4,2);
	cout<<iRet<<"\n";
	float fRet = Multiply(2.0f,2.0f);
	cout<<fRet<<"\n";//printf("%f",fRet);
}
