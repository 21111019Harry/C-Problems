#include<stdio.h>
#include<malloc.h>


void check(int *arr, int *brr, int ino);
int main()
{
    int i = 0, size = 0;
    int *p = NULL;
    int *q = NULL;

    printf("Enter the size:-");
    scanf("%d",&size);

    p = (int*)malloc(size*sizeof(int));

    q = (int*)malloc(size*sizeof(int));

    for(i = 0; i < size; i++)
    {
        printf("Enter Elements1:-");
        scanf("%d",&p[i]);
    }
    for(i = 0; i < size; i++)
    {
        printf("Enter Elements2:");
        scanf("%d",&q[i]);
    }

    check(p,q,size);
    return 0;
}
void check(int *arr, int *brr, int ino)
{
    int i = 0, j = 0, k = 0;
    int crr[4];

    for(i = 0; i < ino; i++)
    {
        for(j = 0; j < ino; j++)
        {
            if(arr[i] == brr[j])
            {
                break;
            }
        }
        if(j == ino)
        {
            crr[k++] = arr[i];
        }
    }
    for(i = 0; i < ino; i++)
       {
           for(j = 0; j < ino; j++)
           {
               if(brr[i] == arr[j])
               {
                   break;
               }
           }
           if(j == ino)
           {
               crr[k++] = brr[i];
           }
       }
    for(i = 0; i < 4; i++)
    {
        printf("%d",crr[i]);
    }
    printf("\n");

}
