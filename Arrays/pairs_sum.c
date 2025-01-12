#include<stdio.h>
int main()  {
    int n;
    printf("Enter the size of an array  :");
    scanf("%d",&n);
    int arr[n];
    int x=10;
    for(int i=0;i<=(n-1);i++)   {
        printf("Enter the elements  :");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=(n-1);i++)   {
        for(int j=i+1;j<=(n-1);j++) {
            if(arr[i]+arr[j]==x)  {
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
            for(int k=j+1;k<=(n-1);k++) {
                if(arr[i]+arr[j]+arr[k]==x) {       //Triplets
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
        
return 0;
}
}