#include<stdio.h>

void main(){ 
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int isComp = 0;
        if(arr[i] == 0 || arr[i] == 1 || arr[i]%2==0){
            isComp = 1;
        }
        for(int j=3;j*j<=n;j+=2){
            if(arr[i]%j == 0){
                isComp = 1;
                break;
            }
        }
        if(isComp){
            printf("The index at which number is composite:");
            printf("%d\n",i);
        }
    }
}