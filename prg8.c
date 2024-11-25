#include<stdio.h>


void main(){

	int n1;
	printf("Enter the size of array 1: ");
	scanf("%d",&n1);
	int n2;
	printf("Enter the size of array 2: ");
	scanf("%d", &n2);

	int arr1[n1];
	printf("Enter the elements af array 1: ");

	for (int i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	int arr2[n2];
	printf("Enter the elements of array 2: ");

	for(int i =0; i<n2 ;i++){
		scanf("%d",&arr2[i]);
	}
	int n3 = n2 + n1;

	int arr3[n3];
	for (int i=0; i<n1; i++){
		arr3[i] = arr1[i];
	}
	for (int i = n1; i<n3; i++){
		arr3[i] = arr2[i-n1];
	}
	printf("New array is:\n");
	for(int i=0;i<n3;i++){
		printf("%d",arr3[i]);
	}
}

