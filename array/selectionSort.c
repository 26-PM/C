#include <stdio.h>

int main()
{
    int n;

    printf("Enter elements in array: \n");
    scanf("%d",&n);

    int arr[n];

    //input
    for (int i=0; i<n; i++)
    {
        printf("Element %d\n",i);
        scanf("%d",&arr[i]);
    }

    //printing
    printf("Array: \n");
    for (int i=0; i<n; i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");

    //selectionSort
    for (int i=0; i<n; i=i+1)
    {
        int pos=i;
        for (int j=i+1; j<n; j++)
        {
            if (arr[pos] > arr[j])
            {
                pos=j;
            }
            if (pos != i)
            {
                int swap=arr[i];
                arr[i]=arr[pos];
                arr[pos]=swap;
            }

        }
    }

    //printing
    printf("Array: \n");
    for (int i=0; i<n; i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");

    return 0;
}