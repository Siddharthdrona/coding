#include<stdio.h>
#include<limits.h>
int main()  {
    int max=INT_MIN,smax=INT_MIN;
    // printf("Enter the size of the array:");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<=(n-1);i++)   {
    //     printf("Enter the values of the array   :");
    // scanf("%d",&arr[i]);

    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++)  {
        if(max<arr[i])  {
            smax=max;
            max=arr[i];
        }
       else if((smax<arr[i])    && (max!=arr[i]) )
    smax=arr[i];
    }
    printf("%d",smax);
    return 0;
}