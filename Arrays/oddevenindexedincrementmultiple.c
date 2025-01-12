#include<stdio.h>
int main()  {
    // int n;
    // printf("Enter the size of Array :");
    // scanf("%d",&n);
    int arr[4]  = {1,2,3,4};
    // for(int i=0;i<=3;i++) {
    //     printf("Enter the element no. %d :",i+1);
    //     scanf("%d",arr[i]);
    
    
    for(int i=0;i<=3;i++) {
            if(i%2==0) arr[i]+=10;
             else arr[i]*=2;
            }
    
    for(int i=0;i<=3;i++)   {
        printf("%d ",arr[i]);
    }
    return 0;
}