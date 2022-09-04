#include<stdio.h>
int searching(int i, int arr[20], int n, int val )
int main()
{
    int s,i,n,arr[20],val;
    printf("Enter how many numbers you want in array: ");
    scanf("%d",&n);
    printf("Enter the numbers in the array: ");
    for(i=0; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the operations given below:\n ");
    printf("1. Searching\n");
    printf("2. Sorting\n");
    printf("3. Show array\n");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
            searching(i,arr[20],n,val);
            break;
        default:
            printf("Please choose the vaild operation");        
    }
    return 0;
}

int searching()
{
    int i,arr[20],n,val;
    printf("Enter which number you want to search: ");
    scanf("%d",&val);
    for(i=0; i<=n; i++)
    {
        if(arr[i]==val)
        {
            printf("The index number of the %d is %d",val,i);
            break;
        }
        else 
        printf("Top= -1");
    }
    return i;
}