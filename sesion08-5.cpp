#include<stdio.h>
int main(){
	int a[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int sum;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0||i==3-1||j==0||j==3-1){
				sum+=a[i][j];
			}
			
		}
	}
	
	printf("tong ca phan tu tren duong bien cau ma tran la:%d",sum);
	
	return 0; 
} 
