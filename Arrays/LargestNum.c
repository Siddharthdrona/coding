#include<stdio.h>
#include<limits.h>
int main()  {
    int n,max;
    printf("Enter the size of an array  :");
    scanf("%d",&n);
    int arr[n];
   for(int i=0;i<=(n-1);i++)    {
        printf("enter the values of the array   : ");
        scanf("%d",&arr[i]);
   }
   for(int i=0;i<=(n-1);i++)  {
        max=INT_MIN;
        if(arr[i]>max)  {
            max=arr[i];
        }
   }
     printf("MAx =%d",max);
   return 0;
}  
