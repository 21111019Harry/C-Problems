#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void check(int *brr, int ino, int value);
int main()
{
    int size = 0, ino = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>> size;
    cout<< "Enter no you search:-";
    cin>> ino;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
    cout<<endl;
    check(arr,size,ino);

    delete arr;

    return 0;
}
void check(int *brr, int ino, int value)
{
    for(int i = 0; i < ino; i++)
    {
        if(brr[i] == value)
        {
            cout<< i <<endl;
            break;
        }
    }
    for(int i = ino; i > 1; i--)
    {
        if(brr[i] == value)
        {
            cout<< i <<endl;
            break;
        }
    }
}
