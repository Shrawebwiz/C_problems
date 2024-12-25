#include<stdio.h>

void main() {
    int n;
    printf("Enter the size of the array:\n ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       int num = arr[i];
       int isPrime = 1;
       if(num<=1){
         isPrime = 0;
       } else{
        for(int j=2; j*j<=n;j++){
        if(num % j == 0){
        isPrime = 0;
        break;
       }
    }
       }
       if(isPrime){
        printf("The prime numbers are:\n ");
        printf("%d\n",num);
       }
}
}