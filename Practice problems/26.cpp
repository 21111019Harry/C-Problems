#include<iostream>
#include<bits/stdc++.h>


using namespace std;


void check(int *brr, int ino, int value);
int main()
{
    int size = 0, no = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>> size;
    cout<< "Enter the no:-";
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
    int i = 0;
    for(i = 0; i < ino; i++)
    {
        if(brr[i] == value)
        {
            cout<< i <<endl;
            break;
        }
        
    }
    if(i == ino)
    {
        cout<< -1 <<endl;
    }
}
