#include<iostream>
#include<cstring>

using namespace std;

void check(char *src);
int main()
{
    char arr[30];

    cout<< "Enter the string:-";
    cin.getline(arr, sizeof(arr));

    check(arr);
    return 0;
}
void check(char *src)
{
    int icnt = 0;
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            icnt++;
        }
        *src++;
    }
    cout<< icnt <<endl;
}
