#include<iostream>
#include<bits/stdc++.h>

///when your data size is small means array,list,vector,or etc... this are in small size then you use selection sort smallest data.

using namespace std;

void selection(int *brr, int length);
int main()
{
    int size = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>>size;

    arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    selection(arr,size);

    delete []arr;

    return 0;
}
void selection(int *brr, int length)
{
    for(int i = 0; i < length-1; i++)
    {
        int imin = i;

        for(int j = i+1; j < length; j++)
        {
            if(brr[j] < brr[imin])
            {
                imin = j;
            }
        }
        swap(brr[imin], brr[i]);
    }

    for(int i = 0; i < length; i++)
    {
        cout<<brr[i] <<" ";
    }
    cout<<endl;
}
