#include<stdio.h>


void main(){

	int n1;
	printf("Enter the size of array : ");
	scanf("%d",&n1);
	
        printf("Enter the first array :\n");
	int arr1[n1];
	for(int i =0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the second array:\n");
	int arr2[n1];
	for(int i = 0; i<n1;i++) {
		scanf("%d", &arr2[i]);
	
	}
	printf("New array is:\n ");
	for (int i=0;i<n1;i++){
		if(i % 2 == 0){
			printf ( "%d\n", arr1[i]);
		} else { 
			printf("%d\n",arr2[i]);
		}
	}
}
