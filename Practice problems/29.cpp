#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void check(vector<int> &v, int ino);
int main()
{
    int size = 0;
    cout<< "Enter the size:-";
    cin>>size;

    vector<int> arr(size);

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    check(arr,size);

    return 0;
}
void check(vector<int> &arr, int ino)
{
    for(int i = 0; i < ino; i++)
    {
        if(arr[i] > arr[i+1])
        {
            arr[i] = arr[i+1];
        }
        else
        {
            arr[i] = -1;
        }
    }
    arr[ino-1] = -1;
    for(int i = 0; i < ino; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
//    resize(8);
    for(auto i : arr)
    {
        cout<< i <<endl;
    }
}
