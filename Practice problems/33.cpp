#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void check(int *brr, int ino, int value);
int main()
{
    int n = 0, no = 0;
    cout<< "Enter the size of array:-";
    cin>> n;
    cout<< "Enter the no you want:-";
    cin>> no;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    check(arr,n,no);
    return 0;
}
void check(int *brr, int ino, int value)
{
    map<int,int> m;

    for(int i = 0 ; i < ino; i++)
    {
        m[brr[i]]++;
        if(m[brr[i]] == value)
        {
            cout<< "\n" <<brr[i] <<endl;
            break;
        }
    }
}
