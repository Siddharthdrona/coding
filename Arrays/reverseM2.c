#include<stdio.h>
void reverse(int arr[]) {
    for(int i=0,j=6;i<j;i++,j--)    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main()  {
    int arr[7]={1,2,3,4,5,6,7};
   int brr[7];
    reverse(arr);


    for(int i=0;i<7;i++) {
         brr[i]=arr[6-i];
   }
   for(int i=0;i<7;i++) {
    printf("%d",brr[i]);
   }
   return 0;
}