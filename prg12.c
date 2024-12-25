#include<stdio.h>

void main(){
    int n;
    int cnt = 0;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int num = arr[i];
        int sum = 0;
        for(int j=1;j<=num/2;j++){
            if(num % j == 0){
                sum += j;
            }
        }
        if(sum == num){
            cnt++;
        }
    }
    if(cnt){
        printf("Array contains a perfect number\n");
    }else{
        printf("Array doesn't contain a perfect number");
    }
}