#include <stdio.h>

int main() {
    int n;
    printf("enter the number of elements:");
    scanf("%d", &n);

     int arr[n];
     printf("enter %d elements:",n);
        for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
        }
     printf("array in reverse order:");
     for(int i= n-1; i>=0;i--){
        printf("%d\t",arr[i]);
     }
     printf ("\n");
return 0;

}
