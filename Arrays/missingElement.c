#include<stdio.h>
#include<stdbool.h>
int main()  {
    int arr[7]={1,2,4,67,57,53};
    int x=2;
    int index=(-1);
    bool flag = false;
    for(int i=0;i<=6;i++)   {
        if(arr[i]==x)   {
         flag = true;
         index=i;
        
            break;
        }
    }
    if(flag ==false)   {
        printf("%d is not present in array",x);
    }
    else{
        printf("%d is present in array and its index",x,index);
    }
    return 0;
}