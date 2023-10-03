#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void check(int *brr, int ino, int value);
int main()
{
    int size = 0, no = 0;
//    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>> size;
    cout<< "Enter the no you want:-";
    cin>> no;

    int arr[size];

//    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }

    check(arr,size,no);

//    free(arr);
    return 0;
}
void check(int *brr, int ino, int value)
{
    map<int,int> m; // ith aapn map create kela

    for(auto i = 0; i < ino; i++)
    {
        // ith aapn aadhi brr array madhlya value map madhe taktoy aani tyachi orignal value ++ krtoy orignal mhnje map jevha create krto tevha
        // tyat 0 aste mg ith aapn 0 la 1 krtoy aani lgech khali check krtoy ki no. jr value chya equal asel tr print krtoy.
        // mhnje ith aadhi brr[0] madhla no yenar aani tyacha to 0 ++ honar mg if madhe check honar mg prt same.
        m[brr[i]]++;
        if(m[brr[i]] == value)
        {
            cout<<"\n"<< brr[i] <<endl;
            break;
        }
    }
}
