#include<iostream>

void check(char *src);
using namespace std;

int main()
{
    char ch[30];

    cout<< "Enter the string:-";
    cin.getline(ch,sizeof(ch));

    check(ch);
    return 0;
}
void check(char *src)
{
    char *start = src;
    char *end = src;
    while(*end != '\0')
    {
        *end++;
    }
    *end--;
    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        *start++;
        *end--;
    }

    cout<< src <<endl;
}
