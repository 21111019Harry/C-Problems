#include<iostream>


using namespace std;

void digonal(int **brr, int iRow, int iCol);
int main()
{
    int **arr = NULL;
    int iRow = 0, iCol = 0;

    cout<< "Enter the row:-";
    cin>> iRow;
    cout<< "Enter the col:-";
    cin>> iCol;

//    arr = (int**)malloc(iRow*sizeof(int*));
    arr = new (int*);

    for(int i = 0; i < iRow; i++)
    {
    //    arr[i] = (int*)malloc(iCol*sizeof(int));
        arr[i] = new int;
    }

    cout<< "Enter the Element:-";
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cin>>arr[i][j];
        }
    }
    digonal(arr,iRow,iCol);
    
    for(int i = 0; i < iRow; i++)
    {
        delete arr[i];
    }
    delete arr;
/*    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
}
void digonal(int **brr, int irow, int icol)
{
    int iSum = 0;
    for(int i = 0; i < irow; i++)
    {
        for(int j = 0; j < icol; j++)
        {
            if(brr[i] == brr[j])
            {
                iSum = iSum+brr[i][j];
            }
        }
    }
    cout<< iSum <<endl;
}
