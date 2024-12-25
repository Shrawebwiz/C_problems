#include<stdio.h>
int factorial(int num){
    int fact =1;
    while(num >0){
    fact = fact*num;
    num--;
    }
    return fact;
}
void main(){
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
         printf("%d! = %d\n", arr[i], factorial(arr[i]));
         
    }
}