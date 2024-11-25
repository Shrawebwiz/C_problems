#include<stdio.h>


void main(){
	int arr1[]={34,45,66,89};
	int arr2[4];
	for(int i=0;i<4;i++){
		arr2[4-1-i]=arr1[i];
	}
	for(int i=0;i<4;i++){
		printf("%d\n",arr2[i]);
	}
}
