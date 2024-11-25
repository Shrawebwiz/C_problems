#include<stdio.h>



void main(){

	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int arr1[n];
	printf("Enter %d elements\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	int arr2[n];
	for(int i=0;i<n;i++){
		arr2[i]=arr1[i];
	}
	printf("\n");
	printf("Here is your second array\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr2[i]);
	}
}

