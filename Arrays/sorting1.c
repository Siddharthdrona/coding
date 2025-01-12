#include<stdio.h>
int main ()  {
   int temp;
    int arr[3];
    for(int i=0;i<=2;i++)   {

        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=2;i++)   {
        for(int j=i+1;j<=2;j++) {
            if(arr[i]>arr[j])   {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("array Elements  :");
    for(int i=0;i<=2;i++)   {
        printf("%d\n",arr[i]);
    }
    return 0;
}