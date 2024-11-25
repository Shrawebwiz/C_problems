#include<stdio.h>


void main(){
	int n1;
	int n2;
	printf("Enter the size of Array 1: ");
	scanf("%d",&n1);
	int arr1[n1];
	
	printf("Enter the elements of array 1\n");
	for(int i = 0;i<n1;i++){
		scanf("%d", &arr1[i]);
	}
	int n2;
	int arr2[n2];
	printf("Enter the size of array 2: ");
	scanf("%d",&n2);
	printf("Enter the elements of array 2\n ");
	for(int i=0;i<n2;i++){
		scanf("%d", &arr2[i]);
	}
	if(sizeof(arr1) == sizeof(arr2)){
		printf("Sizes are equal\n");
	} else {
		printf("Array size are unequal\n");
	}
}

	
