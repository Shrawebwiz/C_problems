#include<stdio.h>


void main(){
	int arr1[3]={10,20,30};
	int arr2[3] = {20,30,40};
	int flag =0;
	
	if (sizeof(arr1) == sizeof(arr2)){
			for(int i = 0; i<3 ; i++){
				if(arr1[i]!=arr2[i]){
					flag=1;
				break;
				}
			}
			if( flag == 0){
				printf("Arrays are equal ! \n");
			} else {
				printf("Arrays are not equal ! \n");
			}
	}
}
