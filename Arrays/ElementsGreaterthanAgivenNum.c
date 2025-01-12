#include<stdio.h>
int main()  {
    int n,count=0;
    printf("Enter a number  :");
    scanf("%d",&n);
    int arr[4] = {2,5,6,9};
    for(int i=0;i<=3;i++)   {
     if(arr[i]>n)  
       count+=1;
    }
   printf("%d ",count);
    return 0;
}