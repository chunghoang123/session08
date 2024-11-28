#include<stdio.h>
int main(){
	int a[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,5}};
	int sum;
	printf("ptu tren duong cheo chinh cau ma tran\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%2d",a[i][j]);
			if(i==j){
				
				sum +=a [i][j];
			}
		}
		printf("\n");
	}
	
	printf("tong cac pt do la: %d",sum);
	
	
	return 0;
} 
