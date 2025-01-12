#include<stdio.h>
int main()  {
    int n,sum=0;
    printf("Enter the size of the Element   :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++) {
        printf("Enter the element no. %d    :",i++) ;
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++) {
        sum+=arr[i];
      
    }
      printf("%d ",sum);
    return 0;
} 





