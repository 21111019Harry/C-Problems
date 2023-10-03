#include<iostream>

using namespace std;

template<class T>
T Add(T *arr, int iSize)
{
	T sum;
	int i = 0;

	for(i=0;i<iSize;i++)
	{
		sum = sum+i;
	}
	return sum;
}
int main()
{
	int arr[]={10,20,30,40,50};
	float brr[]={10.0,3.7,9.8,8.7};
	int iSum = Add(arr,5);
	cout<<iSum<<"\n";
	return 0;
}
