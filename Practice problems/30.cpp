#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void check(string str);
int main()
{
    string str;
    cout<< "Enter the string:-";
    getline(cin,str);
/*    char arr[30];
    cout<< "Enter the string:-";
    cin.getline(arr,sizeof(arr));*/
    
    check(str);
    return 0;
}
void check(string src)
{
    map<char,int> m;

    for(auto i : src)
    {
        m[i]++;
    }
    for(auto i : src)
    {
        if(m[i] == 1)
        {
            cout<< i <<endl;
            break;
        }
    }
}
