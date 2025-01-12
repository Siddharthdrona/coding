// #include <stdio.h>
// #include<limits.h>

// int main() {
//     int n;
//     printf("Enter the size of an array  :");
//     scanf("%d",&n);
//     int arr[n];
//     int max = INT_MIN;
//     for(int i=0;i<=(n-1);i++)   {
      
//         scanf("%d",&arr[i]);
//     }
//      for(int i=0;i<=(n-1);i++)  {
//          if(max<arr[i]) { 
//          max=arr[i];
//          printf("%d",max);
//      }
//  }
        
    
//     return 0;
// }

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check for valid array size
    if (n <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1;
    }

    int arr[n];
    int max = INT_MIN; // Initialize max to the smallest possible integer

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum value in the array
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i]; // Update max if current element is greater
        }
    }

    printf("The maximum value in the array is: %d\n", max);
    return 0;
}
