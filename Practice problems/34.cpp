#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void check(int *brr, int ino);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size of array:-";
    cin>> size;

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
    sort(brr,brr+ino);

    for(int i = ino-1; i > 1; i--)
    {
        cout<< brr[i] <<endl;
        break;
    }
}
