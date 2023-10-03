#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void check(int *brr, int ino, int value);
int main()
{
    int *arr = NULL;
    int size = 0, no = 0;

    cout<< "Enter the size:-";
    cin>> size;
    cout<< "Enter the no. you want:-";
    cin>> no;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }

    check(arr,size,no);

    delete arr;

    return 0;
}
void check(int *brr, int ino, int value)
{
    sort(brr,brr+ino,greater<int>());

    for(auto i = 0; i < value; i++)
    {
        cout << brr[i] <<endl;
    }
}
