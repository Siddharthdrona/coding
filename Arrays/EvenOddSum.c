#include<stdio.h>
int main()  {
    int arr[5] = {1,2,3,4,5};
    int evensum = 0,oddsum = 0;
    for(int i=0;i<=4;i++)   {
        if(i%2==0)  {
            evensum += arr[i];
        }
        else{
            oddsum += arr[i];
        }
    }
    printf("%d ",evensum-oddsum);
    return 0;
}