#include<stdio.h>



void main(){

	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array: ");
	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);
	
	}
        int sum=0;
	for (int i=0;i<n;i++){
		sum += arr[i];
	}
	printf("The sum of your array is: %d\n", sum);





}
