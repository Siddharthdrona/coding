#include<stdio.h>
int main ()  {
    int n,temp;
    printf("Enter the size of an array  :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=(n-1);i++)   {
        printf("enter the values of element no. %d",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=(n-1);i++)   {
        for(int j=i+1;j<=(n-1);j++) {
            if(arr[i]>arr[j])   {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("array Elements  :");
    for(int i=0;i<=(n-1);i++)   {
        printf("%d\n",arr[i]);
    }
    return 0;
}