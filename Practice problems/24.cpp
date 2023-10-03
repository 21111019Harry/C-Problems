#include<iostream>
#include<algorithm>

using namespace std;

void check(int *brr, int ino, int value);
int main()
{
    int *arr = NULL;
    int size = 0, no = 0;
    cout<< "Enter the size:-";
    cin>> size;
    cout<< "Enter the no you want:-";
    cin>> no;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }

    cout<<endl;
    check(arr,size,no);
    return 0;
}
void check(int *brr, int ino, int value)
{
    sort(brr,brr+ino);

    int i = 0, j = ino-1;
    int flag = true;
    while(i != j)
    {
        if(brr[i]+brr[j] == value)
        {
            flag = false;
            break;
        }
        else if(brr[i]+brr[j] > value)
        {
            j--;
        }
        else if(brr[i]+brr[j] < value)
        {
            i++;
        }
    }
    if(flag == false)
    {
        cout<< "True" <<endl;
    }
    else
    {
        cout<< "False" <<endl;
    }
}
