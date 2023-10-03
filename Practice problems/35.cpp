#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void check(int *brr, int *crr, int ino);
int main()
{
    int *arr = NULL;
    int *brr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>> size;

    arr = new int;
    brr = new int;

    for(int i = 0;  i < size; i++)
    {
        cin>> arr[i];
    }

    check(arr,brr,size);

    delete arr;
    
    return 0;
}
void check(int *brr, int *crr, int ino)
{
    int i = 0, j = 0;
    int k = ino/2;

    for(int i = 0; i < ino; i++)
    {
        if((brr[i] % 2) == 0)
        {
            crr[j] = brr[i];
            j++;
        }
        else
        {
            crr[k] = brr[i];
            k++;
        }
    }
    for(int i = 0; i < ino; i++)
    {
        cout<< crr[i] <<" ";
    }
    cout<<endl;
}
