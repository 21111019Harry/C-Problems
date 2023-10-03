#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void bubble(int *brr, int length);
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

    bubble(arr,size);

    delete []arr;

    return 0;
}
void bubble(int *brr, int length)
{
    for(int i = 0; i < length-1; i++)
    {
        bool flag = true;

        for(int j = 0; j < length-i-1; j++)
        {
            if(brr[j] > brr[j+1])
            {
                swap(brr[j],brr[j+1]);
                flag = false;
            }
        }
        if(flag = false)
        {
            break;
        }
    }

    for(int i = 0; i < length; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
