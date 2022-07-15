#include <stdio.h>

int main() {
    int i, n, sum=0;
    int num[10];
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    while(n<5 || n>10) {
        printf("\nArray size limit is 5-10 only\n");
        printf("Enter the size of the array: ");
        scanf("%d", &n);     
    }
    for(i=0; i<n; ++i)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &num[i]);
        
        sum += num[i];
    }
    
    
    
    printf("Sum of all array elements: %d", sum);
}
