#include<stdio.h>

void main() {
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

    
    for(int i=0;i<n;i++){
        int cnt = 0;
        int num = arr[i];
        if(num == 0){
            printf("%d",1);
            continue;
        } 
        while(num>0){
            num /= 10;
            cnt++;
        }
        printf("%d\n",cnt);
    }
}