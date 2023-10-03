#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void check(int *brr, int ino);
int main()
{
    int *arr = NULL;

    int size = 0;
    cout<< "Enter the size:-";
    cin>>size;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }

    check(arr,size);

    delete arr;
    return 0;
}
void check(int *brr, int ino)
{
    int sum = 0, res = 0;
    for(int i = 0; i < ino; i++)
    {
        for(int j = 0; j < ino; j++)
        {
            
        }
    }
    for(int i = 0; i < ino; i++)
    {
        if(sum * brr[i] < sum * brr[i+1])
        {
            res = sum * brr[i+1];
 //           cout<< res <<endl;
        }
    }
    cout<< res <<endl;
}
