#include<stdio.h>
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{1,8,9}};
	int sum;
	printf("ma tran\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			if(i==0&&j==2||i==1&&j==1||i==2&&j==0){
				printf("%2d",a[i][j]);
				sum+=a[i][j];
				
			}
		}
		printf("\n");
	}
	printf("tong cac phan tu tren duong cheo chinh la: %d", sum);
	
	
	
	
	
	
	return 0;
}
