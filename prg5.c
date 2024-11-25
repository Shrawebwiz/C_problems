#include<stdio.h>


void main(){



	int arr1[]={10,20,30};
	int arr2[]={12, 23, 25};
	int sum1=0;
	int sum2=0;
	for(int i = 0;i<3;i++){
		arr1[i]+=sum1;
		arr2[i]+=sum2;
	}
	if ( sum1==sum2){
		printf("Sums of both the arrays are equal");
	}
	else{
		printf("Sums are not equal");
	}
}

